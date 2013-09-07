<?php
/**
 * Field handler to present a link to checkin seeds.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_node_link_checkin extends views_handler_field_node_link {

  /**
   * Renders the link.
   */
  function render_link($node, $values) {
    // Ensure user has access to check out seeds.
    if (!user_access('check in seeds') || ($node->type != 'transaction' && $node->type != 'seed')) {
      return;
    }

    $this->options['alter']['make_link'] = TRUE;
    if ($node->type == 'transaction') {
      // On a transaction listing, only show the checkin link if the
      // transaction is a checkout transaction.
      if ($node->field_transaction_type[$node->language][0]['value'] == 'in') {
        return;
      }
      $seed = node_load($node->field_transaction_seed[$node->language][0]['nid']);
    }
    else {
      $seed = $node;
    }
    $seed_id = seedlibrary_general_seed_id($seed->title, $seed->nid);
    $this->options['alter']['path'] = "plant/$seed_id/checkin";

    $text = !empty($this->options['text']) ? $this->options['text'] : t('Checkin');
    return $text;
  }
}
