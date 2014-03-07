<?php
// Plugin definition
$plugin = array(
  'title' => t('Layout 1col with banner'),
  'icon' => 'layout-1col.png',
  'category' => t('Restaurant'),
  'theme' => 'layout_1col',
  'regions' => array(
    'banner' => t('banner'),
    'page_content' => t('Content'),
  ),
);
