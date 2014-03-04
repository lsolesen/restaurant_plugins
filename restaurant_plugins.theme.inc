<?php

/**
 * Theme functions for restaurant_plugins.
 */

/**
 * template_preprocess_contact_info_pane().
 *
 * @ingroup themeable
 */
function template_preprocess_contact_info_pane(&$variables) {
  //
}

/**
 * template_preprocess_logo_site_name_pane().
 *
 * @ingroup themeable
 */
function template_preprocess_logo_site_name_pane(&$variables) {
  // Get a link to the front page.
  $variables['front_page'] = url();

  // Add the site name to the template.
  $variables['site_name'] = (theme_get_setting('toggle_name') ? filter_xss_admin(variable_get('site_name', 'Restaurant')) : '');

  // Add the logo to the template.
  $variables['logo'] = theme('image', array('path' => theme_get_setting('logo')));
}

/**
 * template_preprocess_navigation().
 *
 * @ingroup themeable
 */
function template_preprocess_navigation(&$variables) {
  // Format and add main menu to template.
  $variables['main_menu'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
  $variables['main_menu']['#theme_wrappers'] = array('menu_tree__navbar_nav');
}
