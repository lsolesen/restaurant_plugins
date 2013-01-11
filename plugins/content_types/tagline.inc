<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Tagline'),
  'single' => TRUE,
  'category' => array(t('Restaurant')),
  'render callback' => 'restaurant_plugins_tagline_content_type_render',
);


/**
 * Render Callback
 */
function restaurant_plugins_tagline_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<h1>The Restaurant</h1><h3>Veggie magis turnip corn tomatillo aubergine quandong lettuce</h3>';

  return $block;
}
