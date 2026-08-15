#pragma once
// IWYU pragma private; include "MA/Flora/DrawStateUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__DrawStateUtility_def.hpp"
#include "MA/Flora/zzzz__IndirectStateFlags_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.CreateStateMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::MA::Flora::IndirectStateFlags)>(&::MA::Flora::DrawStateUtility::CreateStateMask)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814bcfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"CreateStateMask", {}, {::i2c::type_of<::MA::Flora::IndirectStateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.StateMaskContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, int32_t)>(&::MA::Flora::DrawStateUtility::StateMaskContainsKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bd100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"StateMaskContainsKey", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.StateMaskFindSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t, int32_t)>(&::MA::Flora::DrawStateUtility::StateMaskFindSlot)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814bd110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"StateMaskFindSlot", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.StateMaskHasFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::MA::Flora::IndirectStateFlags)>(&::MA::Flora::DrawStateUtility::StateMaskHasFlags)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814bd180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"StateMaskHasFlags", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::MA::Flora::IndirectStateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.CreateStateIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::MA::Flora::DrawStateUtility::CreateStateIndices)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814bcec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"CreateStateIndices", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.StateSlotFromKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t, int32_t)>(&::MA::Flora::DrawStateUtility::StateSlotFromKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bd230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"StateSlotFromKey", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.ComputeBinIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::DrawStateUtility::ComputeBinIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bce50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"ComputeBinIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.ComputePartitionBinStride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::MA::Flora::DrawStateUtility::ComputePartitionBinStride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"ComputePartitionBinStride", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.ComputePartitionedBinIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::DrawStateUtility::ComputePartitionedBinIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bce80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"ComputePartitionedBinIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.ComputePartitionedCommandCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::MA::Flora::DrawStateUtility::ComputePartitionedCommandCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bcea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"ComputePartitionedCommandCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.IsDefaultSingleLightmapPartition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::MA::Flora::DrawStateUtility::IsDefaultSingleLightmapPartition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bd0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"IsDefaultSingleLightmapPartition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.ComputeTemplateLodStateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::MA::Flora::DrawStateUtility::ComputeTemplateLodStateIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"ComputeTemplateLodStateIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.InsertSortedUniqueLightmapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeList_1<int32_t>, int32_t)>(&::MA::Flora::DrawStateUtility::InsertSortedUniqueLightmapIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814bd050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"InsertSortedUniqueLightmapIndex", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawStateUtility.FindSortedLightmapPartitionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::NativeList_1<int32_t>, int32_t)>(&::MA::Flora::DrawStateUtility::FindSortedLightmapPartitionIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814bd000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"FindSortedLightmapPartitionIndex", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint8_t MA::Flora::DrawStateUtility::CreateStateMask(::MA::Flora::IndirectStateFlags  supported)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"CreateStateMask", {}, {::i2c::type_of<::MA::Flora::IndirectStateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, supported);
}
inline bool MA::Flora::DrawStateUtility::StateMaskContainsKey(uint32_t  mask, int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"StateMaskContainsKey", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mask, key);
}
inline int32_t MA::Flora::DrawStateUtility::StateMaskFindSlot(uint32_t  state, int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"StateMaskFindSlot", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, key);
}
inline bool MA::Flora::DrawStateUtility::StateMaskHasFlags(uint32_t  state, ::MA::Flora::IndirectStateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"StateMaskHasFlags", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::MA::Flora::IndirectStateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state, flags);
}
inline uint32_t MA::Flora::DrawStateUtility::CreateStateIndices(uint32_t  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"CreateStateIndices", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, mask);
}
inline int32_t MA::Flora::DrawStateUtility::StateSlotFromKey(uint32_t  indices, int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"StateSlotFromKey", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, indices, key);
}
inline int32_t MA::Flora::DrawStateUtility::ComputeBinIndex(int32_t  baseOffset, int32_t  splitIndex, int32_t  slotsPerLod, int32_t  lodCount, int32_t  stateSlot, int32_t  lodIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"ComputeBinIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, baseOffset, splitIndex, slotsPerLod, lodCount, stateSlot, lodIndex);
}
inline int32_t MA::Flora::DrawStateUtility::ComputePartitionBinStride(int32_t  splitCount, int32_t  slotsPerLod, int32_t  lodCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"ComputePartitionBinStride", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, splitCount, slotsPerLod, lodCount);
}
inline int32_t MA::Flora::DrawStateUtility::ComputePartitionedBinIndex(int32_t  baseOffset, int32_t  partitionIndex, int32_t  splitIndex, int32_t  splitCount, int32_t  slotsPerLod, int32_t  lodCount, int32_t  stateSlot, int32_t  lodIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"ComputePartitionedBinIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, baseOffset, partitionIndex, splitIndex, splitCount, slotsPerLod, lodCount, stateSlot, lodIndex);
}
inline int32_t MA::Flora::DrawStateUtility::ComputePartitionedCommandCount(int32_t  totalCommandCount, int32_t  partitionCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"ComputePartitionedCommandCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, totalCommandCount, partitionCount);
}
inline bool MA::Flora::DrawStateUtility::IsDefaultSingleLightmapPartition(int32_t  partitionCount, int32_t  lightmapIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"IsDefaultSingleLightmapPartition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, partitionCount, lightmapIndex);
}
inline int32_t MA::Flora::DrawStateUtility::ComputeTemplateLodStateIndex(int32_t  templateIndex, int32_t  lodIndex, int32_t  stateKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"ComputeTemplateLodStateIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, templateIndex, lodIndex, stateKey);
}
inline void MA::Flora::DrawStateUtility::InsertSortedUniqueLightmapIndex(::Unity::Collections::NativeList_1<int32_t>  sortedLightmapIndices, int32_t  lightmapIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"InsertSortedUniqueLightmapIndex", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sortedLightmapIndices, lightmapIndex);
}
inline int32_t MA::Flora::DrawStateUtility::FindSortedLightmapPartitionIndex(::Unity::Collections::NativeList_1<int32_t>  sortedLightmapIndices, int32_t  lightmapIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawStateUtility*>(),
                        {"FindSortedLightmapPartitionIndex", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sortedLightmapIndices, lightmapIndex);
}
// Ctor Parameters []
constexpr ::MA::Flora::DrawStateUtility::DrawStateUtility()   {
}
