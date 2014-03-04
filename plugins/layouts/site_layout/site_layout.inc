<?php
// Plugin definition
$plugin = array(
  'title' => t('Site Layout'),
  'icon' => 'site-layout.png',
  'category' => t('Restaurant'),
  'theme' => 'site_layout',
  'regions' => array(
    'top' => t('Top'),
    'header_col1' => t('Header column 1'),
    'header_col2' => t('Header column 2'),
    'header_col3' => t('Header column 3'),
    'navigation' => t('Navigation'),
    'page_content' => t('Page content'),
  ),
);
