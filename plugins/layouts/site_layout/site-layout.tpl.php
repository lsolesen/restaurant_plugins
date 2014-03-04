<?php
/**
 * @file
 * Template for the site layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="site-layout clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
    
  <header id="header" class="header" role="header">
    <div class="container">
      <div class="row">
        <div class="col-md-4 col-1">
          <div class="panel-panel-inner">
            <?php print $content['header_col1']; ?>
          </div>
        </div>
        <div class="col-md-4 col-2">
          <div class="panel-panel-inner">
            <?php print $content['header_col2']; ?>
          </div>
        </div>
        <div class="col-md-4 col-3">
          <div class="panel-panel-inner">
            <?php print $content['header_col3']; ?>
          </div>
        </div>
      </div>
    </div>
  </header> <!-- /#header -->
    
  <div id="main-wrapper">
    <div id="main" class="main">
      <div class="row">
        <div class="col-md-12 panel-panel page-content">
          <div class="panel-panel-inner">
            <?php print $content['page_content']; ?>
          </div>
        </div>
      </div>
    </div> <!-- /#main -->
  </div> <!-- /#main-wrapper -->

</div> <!-- /.site-layout -->
