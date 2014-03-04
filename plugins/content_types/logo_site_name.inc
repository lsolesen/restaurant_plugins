<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Logo and Site name'),
  'single' => TRUE,
  'category' => array(t('Restaurant')),
);

/**
 * Render Callback
 */
function restaurant_plugins_logo_site_name_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();

  $block->title = isset($conf['title']) ? $conf['title'] : '';
  $block->content = theme('logo_site_name');

  return $block;
}
