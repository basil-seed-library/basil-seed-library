<?php
/**
 * Field handler to present a link to borrow a seed.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_node_link_checkout extends views_handler_field_node_link {

  /**
   * Renders the link.
   */
  function render_link($node, $values) {
    // Ensure user has access to check out seeds.
    if (!user_access('check out seeds') || $node->type != 'seed' || $node->field_seed_quantity[$node->language][0]['value'] <= 0) {
      return;
    }

    $this->options['alter']['make_link'] = TRUE;
    $seed_id = seedlibrary_general_seed_id($node->title, $node->nid);
    $this->options['alter']['path'] = "plant/$seed_id/checkout";

    $text = !empty($this->options['text']) ? $this->options['text'] : t('Checkout');
    return $text;
  }
}
