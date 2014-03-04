<?php

/**
 * @file
 * Template for logo and site name.
 */
?>
<?php if ($logo): ?>
  <a href="<?php print $front_page ?>" class="logo pull-left"><?php print $logo; ?></a>
<?php endif; ?>
<?php if ($site_name): ?>
  <a href="<?php print $front_page ?>" class="brand pull-left"><?php print $site_name; ?></a>
<?php endif; ?>
