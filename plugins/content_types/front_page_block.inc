<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Front page block'),
  'description' => t('Displays a sample front page block'),
  'single' => TRUE,
  'category' => array(t('Restaurant')),
  'render callback' => 'restaurant_plugins_front_page_block_content_type_render',
);


/**
 * Render Callback
 */
function restaurant_plugins_front_page_block_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<div class="row">
  <div class="span4">
    <div class="section">
      <div class="section-image">
        <a href="/menus"><i class="icon-list-alt"></i></a>
      </div>
      <div class="section-description">
        <h3>Menus</h3>
        <p>Veggies sunt bona vobis, proinde vos postulo esse magis turnip corn tomatillo aubergine quandong lettuce</p>
      </div>
    </div>
  </div>
  <div class="span4">
    <div class="section">
      <div class="section-image">
        <a href="/events"><i class="icon-calendar"></i></a>
      </div>
      <div class="section-description">
        <h3>Events</h3>
        <p>Veggies sunt bona vobis, proinde vos postulo esse magis turnip corn tomatillo aubergine quandong lettuce</p>
      </div>
    </div>
  </div>
  <div class="span4">
    <div class="section">
      <div class="section-image">
        <a href="/blog"><i class="icon-bullhorn"></i></a>
      </div>
      <div class="section-description">
        <h3>Blog</h3>
        <p>Veggies sunt bona vobis, proinde vos postulo esse magis turnip corn tomatillo aubergine quandong lettuce</p>
      </div>
    </div>
  </div>
</div>';

  return $block;
}
