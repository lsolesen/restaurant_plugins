<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Contact block'),
  'single' => TRUE,
  'category' => array(t('Restaurant')),
);

/**
 * Render Callback
 */
function restaurant_plugins_contact_block_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();

  $block->title = t('Contact');

  // Add address to content.
  $block->content = check_markup(restaurant_base_get_settings('address'));

  // Add telephone to content.
  $block->content = check_markup(restaurant_base_get_settings('telephone'));

  return $block;
}
