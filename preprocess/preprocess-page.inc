<?php

/**
 * @file
 * Container for hook_process_page().
 */

/**
 * Implements hook_process_page().
 * 
 * @see
 *   alpha_process().
 */
function lanlh_alpha_preprocess_page(&$vars) {
  if (drupal_is_front_page()) {
    unset($vars['page']['content']['content']['content']['system_main']['default_message']);
  }
}
