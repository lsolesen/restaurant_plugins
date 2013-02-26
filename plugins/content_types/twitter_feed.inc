<?php

/**
* Plugin definition
*/
$plugin = array(
  'title' => t('Twitter'),
  'single' => TRUE,
  'category' => array(t('Restaurant')),
  'edit form' => 'restaurant_plugins_twitter_feed_content_type_form',
);


/**
 * Settings Form
 */
function restaurant_plugins_twitter_feed_content_type_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => !empty($conf['title']) ? $conf['title'] : t('Twitter'),
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  $form['twitter_handle'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter handle'),
    '#size' => 50,
    '#required' => TRUE,
    '#default_value' => !empty($conf['twitter_handle']) ? $conf['twitter_handle'] : '',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );

  return $form;
}

function restaurant_plugins_twitter_feed_content_type_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render Callback
 */
function restaurant_plugins_twitter_feed_content_type_render($subtype, $conf, $args) {
  $block = new stdClass();

  $block->title = $conf['title'];
  $block->content = twitter_pull_render($conf['twitter_handle'], NULL, 3);

  return $block;
}
