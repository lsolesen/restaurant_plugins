<?php

/**
 * @file
 * Template for site navigation.
 */
?>
<div class="navbar-header">
  <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-collapse">
    <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
    <span class="icon-bar"></span>
    <span class="icon-bar"></span>
    <span class="icon-bar"></span>
  </button>
</div> <!-- /.navbar-header -->

<div class="collapse navbar-collapse" id="navbar-collapse">
  <?php if ($main_menu): ?>
    <?php print render($main_menu); ?>
  <?php endif; ?>
</div><!-- /.navbar-collapse -->
