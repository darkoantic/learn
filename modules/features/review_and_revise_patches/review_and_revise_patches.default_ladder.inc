<?php
/**
 * @file
 * review_and_revise_patches.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function review_and_revise_patches_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'review_and_revise_patches';
  $rung->title = 'Review and revise patches ';
  $rung->description = '';
  $rung->lesson = 'review_and_revise_patches';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 50;
  $export['review_and_revise_patches'] = $rung;

  return $export;
}
