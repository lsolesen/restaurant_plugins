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