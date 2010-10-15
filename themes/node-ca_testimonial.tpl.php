<?php
// $Id$

?>
<div id="node-<?php print $node->nid; ?>" class="ca-testimonials-node-<?php print $node->type; ?>"><div class="node-inner clear-block">

  <?php if ($unpublished): ?>
    <div class="unpublished"><?php print t('Unpublished'); ?></div>
  <?php endif; ?>
  <?php if ($submitted || $terms): ?>
    <div class="meta">
      <?php if ($submitted): ?>
        <div class="submitted">
          <?php print $submitted; ?>
        </div>
      <?php endif; ?>

      <?php if ($terms): ?>
        <div class="terms terms-inline"><?php print t(' in ') . $terms; ?></div>
      <?php endif; ?>
    </div>
  <?php endif; ?>

  <div class="content clear-block">
    <?php print $content; ?>
  </div>
  <div class="ca-testimonials-right">
  <h3 class="title">
    <?php print $title ?>
  </h3>
  <strong><?php print $field_ca_testimonial_link[0]['view']; ?></strong>
  </div>

  <?php print $links; ?>

</div></div> <!-- /node-inner, /node -->
