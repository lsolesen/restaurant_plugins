<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Site navigation'),
  'single' => TRUE,
  'category' => array(t('Restaurant')),
);

/**
 * Render Callback
 */
function restaurant_plugins_navigation_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();
  $block->content = theme('navigation');

  return $block;
}
