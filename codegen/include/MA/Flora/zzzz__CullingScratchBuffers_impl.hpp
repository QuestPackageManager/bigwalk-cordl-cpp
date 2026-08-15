#pragma once
// IWYU pragma private; include "MA/Flora/CullingScratchBuffers.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_impl.hpp"
#include "MA/Flora/zzzz__CullingLayoutCounts_impl.hpp"
#include "MA/Flora/zzzz__DrawVisibilityMask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "MA/Flora/zzzz__CullingScratchBuffers_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::CullingScratchBuffers.EnsureCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingScratchBuffers::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::CullingScratchBuffers::EnsureCapacity)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814b2120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingScratchBuffers*>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingScratchBuffers.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingScratchBuffers::*)()>(&::MA::Flora::CullingScratchBuffers::Dispose)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814b1fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingScratchBuffers*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::CullingScratchBuffers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::CullingScratchBuffers::*)()>(&::MA::Flora::CullingScratchBuffers::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingScratchBuffers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_ChunkVisibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChunkVisibility;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_ChunkVisibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChunkVisibility;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_ChunkVisibility(::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChunkVisibility = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawChunkCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawChunkCounts;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawChunkCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawChunkCounts;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateDrawChunkCounts(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateDrawChunkCounts = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawChunkOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawChunkOffsets;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawChunkOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawChunkOffsets;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateDrawChunkOffsets(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateDrawChunkOffsets = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawInstanceCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawInstanceCounts;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawInstanceCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawInstanceCounts;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateDrawInstanceCounts(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateDrawInstanceCounts = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateLightmapPartitionCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateLightmapPartitionCounts;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateLightmapPartitionCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateLightmapPartitionCounts;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateLightmapPartitionCounts(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateLightmapPartitionCounts = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawBinOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawBinOffsets;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawBinOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawBinOffsets;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateDrawBinOffsets(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateDrawBinOffsets = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawCommandOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawCommandOffsets;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawCommandOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawCommandOffsets;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateDrawCommandOffsets(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateDrawCommandOffsets = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateVisibleInstanceOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateVisibleInstanceOffsets;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateVisibleInstanceOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateVisibleInstanceOffsets;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateVisibleInstanceOffsets(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateVisibleInstanceOffsets = value;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateVisibilityMasks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateVisibilityMasks;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateVisibilityMasks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateVisibilityMasks;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateVisibilityMasks(::Unity::Collections::NativeArray_1<::MA::Flora::DrawVisibilityMask>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateVisibilityMasks = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateChunkStateFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateChunkStateFlags;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateChunkStateFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateChunkStateFlags;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateChunkStateFlags(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateChunkStateFlags = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateStateMasks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateStateMasks;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateStateMasks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateStateMasks;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateStateMasks(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateStateMasks = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateEmittedStateFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateEmittedStateFlags;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateEmittedStateFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateEmittedStateFlags;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateEmittedStateFlags(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateEmittedStateFlags = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawCommandCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawCommandCounts;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateDrawCommandCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateDrawCommandCounts;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateDrawCommandCounts(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateDrawCommandCounts = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateLightmapIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateLightmapIndices;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateLightmapIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateLightmapIndices;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateLightmapIndices(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateLightmapIndices = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateLightmapVisibleInstanceCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateLightmapVisibleInstanceCounts;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateLightmapVisibleInstanceCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateLightmapVisibleInstanceCounts;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateLightmapVisibleInstanceCounts(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateLightmapVisibleInstanceCounts = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_RangeCommandCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeCommandCounts;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_RangeCommandCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeCommandCounts;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_RangeCommandCounts(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RangeCommandCounts = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_RangeCommandOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeCommandOffsets;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_RangeCommandOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RangeCommandOffsets;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_RangeCommandOffsets(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RangeCommandOffsets = value;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_ReducedCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReducedCounts;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_ReducedCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReducedCounts;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_ReducedCounts(::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReducedCounts = value;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_ExactCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExactCounts;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_ExactCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExactCounts;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_ExactCounts(::Unity::Collections::NativeArray_1<::MA::Flora::CullingLayoutCounts>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExactCounts = value;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_OrderedVisibleChunks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderedVisibleChunks;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_OrderedVisibleChunks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderedVisibleChunks;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_OrderedVisibleChunks(::Unity::Collections::NativeArray_1<::MA::Flora::CullingChunkIndex>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrderedVisibleChunks = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_OrderedVisibleChunkSourceIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderedVisibleChunkSourceIndices;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_OrderedVisibleChunkSourceIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderedVisibleChunkSourceIndices;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_OrderedVisibleChunkSourceIndices(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrderedVisibleChunkSourceIndices = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_OrderedVisibleChunkLightmapPartitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderedVisibleChunkLightmapPartitions;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_OrderedVisibleChunkLightmapPartitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderedVisibleChunkLightmapPartitions;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_OrderedVisibleChunkLightmapPartitions(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrderedVisibleChunkLightmapPartitions = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateChunkWriteCursors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateChunkWriteCursors;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& MA::Flora::CullingScratchBuffers::__cordl_internal_get_TemplateChunkWriteCursors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TemplateChunkWriteCursors;
}
constexpr void MA::Flora::CullingScratchBuffers::__cordl_internal_set_TemplateChunkWriteCursors(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TemplateChunkWriteCursors = value;
}
template<typename T>
inline void MA::Flora::CullingScratchBuffers::EnsureCapacity(::by_ref<::Unity::Collections::NativeArray_1<T>>  array, int32_t  requiredLength)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::CullingScratchBuffers*>(),
                    {"EnsureCapacity", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, requiredLength);
}
inline void MA::Flora::CullingScratchBuffers::EnsureCapacity(int32_t  maxChunkCount, int32_t  maxTemplateCount, int32_t  visibleChunkCount, int32_t  drawRangeCount, int32_t  templateDrawCommandStride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingScratchBuffers*>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxChunkCount, maxTemplateCount, visibleChunkCount, drawRangeCount, templateDrawCommandStride);
}
template<typename T>
inline void MA::Flora::CullingScratchBuffers::SafeDispose(::by_ref<::Unity::Collections::NativeArray_1<T>>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::CullingScratchBuffers*>(),
                    {"SafeDispose", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
inline void MA::Flora::CullingScratchBuffers::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingScratchBuffers*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::CullingScratchBuffers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingScratchBuffers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::CullingScratchBuffers* MA::Flora::CullingScratchBuffers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::CullingScratchBuffers*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::CullingScratchBuffers::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::CullingScratchBuffers::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingScratchBuffers::CullingScratchBuffers()   {
}
