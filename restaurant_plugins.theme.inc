<?php

/**
 * Theme functions for restaurant_plugins.
 */

/**
 * theme_contact_block().
 *
 * @ingroup themeable
 */
function theme_contact_block($variables) {
  $address = $variables['address'];
  $phone = $variables['phone'];

  $output = '';

  // Add address
  $output .= '<p class="address"><i class="fa fa-map-marker"></i>' . $address . '</p>';
  $output .= '<p class="phone"><i class="fa fa-phone"></i>' . $phone . '</p>';

  return $output;
}

/**
 * theme_logo_site_name().
 *
 * @ingroup themeable
 */
function theme_logo_site_name($variables) {
  $front_page = url();
  $site_name = (theme_get_setting('toggle_name') ? filter_xss_admin(variable_get('site_name', 'Drupal')) : '');
  $logo = theme('image', array(
    'path' => theme_get_setting('logo'),
  ));

  $output = l($logo, $front_page, array(
    'html' => TRUE,
    'attributes' => array('class' => array('logo')),
  ));

  $output .= '<h1 class="brand">' . $site_name . '</h1>';

  return $output;
}
