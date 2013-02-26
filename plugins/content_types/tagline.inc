<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Tagline'),
  'single' => TRUE,
  'category' => array(t('Restaurant')),
);


/**
 * Render Callback
 */
function restaurant_plugins_tagline_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $block->content = '<h1>' . restaurant_base_get_settings('name') . '</h1>';
  $block->content .= '<h3>' . restaurant_base_get_settings('slogan') . '</h3>';

  return $block;
}
