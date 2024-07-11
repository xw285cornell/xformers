#include <torch/library.h>
#include <torch/types.h>

TORCH_LIBRARY_FRAGMENT(xformers, m) {
  m.def(TORCH_SELECTIVE_SCHEMA(
      "xformers::sparse24_largest_mask_2d(Tensor input) -> Tensor"));
  m.def(TORCH_SELECTIVE_SCHEMA(
      "xformers::sparse24_largest_with_Krandom_mask_2d(Tensor input, int numRandom) -> Tensor"));
  m.def(TORCH_SELECTIVE_SCHEMA(
      "xformers::_sparse24_pack_mask(Tensor mask) -> Tensor"));
  m.def(TORCH_SELECTIVE_SCHEMA(
      "xformers::_sparse24_reorder_meta(Tensor mask) -> Tensor"));
  m.def(TORCH_SELECTIVE_SCHEMA(
      "xformers::_sparse24_gemm(Tensor a, Tensor b, Tensor meta_reordered) -> Tensor"));
  m.def(TORCH_SELECTIVE_SCHEMA(
      "xformers::_sparse24_pack_tensor_according_to_mask(Tensor a, Tensor meta_reordered) -> Tensor"));
  m.def(TORCH_SELECTIVE_SCHEMA(
      "xformers::sparse24_sparsify_both_ways(Tensor input, str algorithm = '', str backend = 'cutlass') -> (Tensor, Tensor, Tensor, Tensor, Tensor)"));
  m.def(TORCH_SELECTIVE_SCHEMA(
      "xformers::_sparse24_meta_shuffle_test(Tensor local_meta, bool transposed) -> Tensor"));
  m.def(TORCH_SELECTIVE_SCHEMA(
      "xformers::sparse24_apply(Tensor input, Tensor threads_masks, str backend = 'cutlass') -> (Tensor, Tensor, Tensor, Tensor)"));
  m.def(TORCH_SELECTIVE_SCHEMA(
      "xformers::sparse24_apply_dense_output(Tensor input, Tensor threads_masks, float mul0=0.0, float mul1=1.0) -> Tensor"));
}
