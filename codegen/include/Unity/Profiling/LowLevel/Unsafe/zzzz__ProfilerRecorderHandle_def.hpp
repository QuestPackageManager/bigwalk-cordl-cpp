#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerRecorderHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRecorderHandle)
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerRecorderDescription;
}
namespace Unity::Profiling {
struct ProfilerCategory;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerRecorderHandle;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle);
DEFINE_IL2CPP_CLASS(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle, "Unity.Profiling.LowLevel.Unsafe", "ProfilerRecorderHandle");
// Dependencies 
namespace Unity::Profiling::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Profiling.LowLevel.Unsafe.ProfilerRecorderHandle
#pragma pack(push, 0)
struct CORDL_TYPE ProfilerRecorderHandle {
public:
// Declarations
 __declspec(property(get=get_Valid)) bool  Valid;

/// @brief Field handle, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) uint64_t  handle;

/// @brief Method Get, addr 0x1822491f0, size 0x50, virtual false, abstract: false, final false
static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Get(::Unity::Profiling::ProfilerCategory  category, ::StringW  statName) ;

/// @brief Method Get, addr 0x1822491d0, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Get(::Unity::Profiling::ProfilerMarker  marker) ;

/// @brief Method GetByName, addr 0x182248ff0, size 0x140, virtual false, abstract: false, final false
static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle GetByName(::Unity::Profiling::ProfilerCategory  category, ::StringW  name) ;

/// @brief Method GetByName_Injected, addr 0x182248fa0, size 0x10, virtual false, abstract: false, final false
static inline void GetByName_Injected(::by_ref<::Unity::Profiling::ProfilerCategory>  category, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>  ret) ;

/// @brief Method GetByName__Unmanaged, addr 0x182248fc0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle GetByName__Unmanaged(::Unity::Profiling::ProfilerCategory  category, uint8_t*  name, int32_t  nameLen) ;

/// @brief Method GetByName__Unmanaged_Injected, addr 0x182248fb0, size 0x10, virtual false, abstract: false, final false
static inline void GetByName__Unmanaged_Injected(::by_ref<::Unity::Profiling::ProfilerCategory>  category, uint8_t*  name, int32_t  nameLen, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>  ret) ;

/// @brief Method GetDescription, addr 0x182249170, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription GetDescription(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle  handle) ;

/// @brief Method GetDescriptionInternal, addr 0x182249140, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription GetDescriptionInternal(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle  handle) ;

/// @brief Method GetDescriptionInternal_Injected, addr 0x182249130, size 0x10, virtual false, abstract: false, final false
static inline void GetDescriptionInternal_Injected(::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>  handle, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>  ret) ;

constexpr uint64_t const& __cordl_internal_get_handle() const;

constexpr uint64_t& __cordl_internal_get_handle() ;

constexpr void __cordl_internal_set_handle(uint64_t  value) ;

/// @brief Method .ctor, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint64_t  handle) ;

/// @brief Method get_Valid, addr 0x182249240, size 0x20, virtual false, abstract: false, final false
inline bool get_Valid() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProfilerRecorderHandle() ;

// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr ProfilerRecorderHandle(uint64_t  handle) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___handle_padding[0x0];
/// @brief Field handle, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___handle;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___handle_padding_forAlignment[0x0];
/// @brief Field handle, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___handle_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle) == 0x8, "Size mismatch!");

} // namespace end def Unity::Profiling::LowLevel::Unsafe
