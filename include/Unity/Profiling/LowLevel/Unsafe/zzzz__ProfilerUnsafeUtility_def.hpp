#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerUnsafeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerUnsafeUtility)
namespace System {
struct IntPtr;
}
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerCategoryDescription;
}
namespace Unity::Profiling::LowLevel {
struct MarkerFlags;
}
namespace Unity::Profiling {
struct ProfilerCategoryColor;
}
namespace Unity::Profiling {
struct ProfilerCounterOptions;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace Unity::Profiling::LowLevel::Unsafe {
class ProfilerUnsafeUtility;
}
// Write type traits
MARK_REF_T(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*);
DEFINE_IL2CPP_CLASS(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*, "Unity.Profiling.LowLevel.Unsafe", "ProfilerUnsafeUtility");
// Dependencies System.Object
namespace Unity::Profiling::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility
class CORDL_TYPE ProfilerUnsafeUtility : public ::System::Object {
public:
// Declarations
/// @brief Method BeginSample, addr 0x182249720, size 0x10, virtual false, abstract: false, final false
static inline void BeginSample(::System::IntPtr  markerPtr) ;

/// @brief Method CreateCategory__Unmanaged, addr 0x182249730, size 0x10, virtual false, abstract: false, final false
static inline uint16_t CreateCategory__Unmanaged(uint8_t*  name, int32_t  nameLen, ::Unity::Profiling::ProfilerCategoryColor  colorIndex) ;

/// @brief Method CreateCounterValue__Unmanaged, addr 0x182249740, size 0x30, virtual false, abstract: false, final false
static inline void* CreateCounterValue__Unmanaged(::by_ref<::System::IntPtr>  counterPtr, uint8_t*  name, int32_t  nameLen, uint16_t  categoryId, ::Unity::Profiling::LowLevel::MarkerFlags  flags, uint8_t  dataType, uint8_t  dataUnit, int32_t  dataSize, ::Unity::Profiling::ProfilerCounterOptions  counterOptions) ;

/// @brief Method CreateMarker, addr 0x182249790, size 0x130, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateMarker(::StringW  name, uint16_t  categoryId, ::Unity::Profiling::LowLevel::MarkerFlags  flags, int32_t  metadataCount) ;

/// @brief Method CreateMarker_Injected, addr 0x182249770, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateMarker_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, uint16_t  categoryId, ::Unity::Profiling::LowLevel::MarkerFlags  flags, int32_t  metadataCount) ;

/// @brief Method CreateMarker__Unmanaged, addr 0x182249780, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateMarker__Unmanaged(uint8_t*  name, int32_t  nameLen, uint16_t  categoryId, ::Unity::Profiling::LowLevel::MarkerFlags  flags, int32_t  metadataCount) ;

/// @brief Method EndSample, addr 0x1822498c0, size 0x10, virtual false, abstract: false, final false
static inline void EndSample(::System::IntPtr  markerPtr) ;

/// @brief Method GetCategoryDescription, addr 0x1822498e0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription GetCategoryDescription(uint16_t  categoryId) ;

/// @brief Method GetCategoryDescription_Injected, addr 0x1822498d0, size 0x10, virtual false, abstract: false, final false
static inline void GetCategoryDescription_Injected(uint16_t  categoryId, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription>  ret) ;

/// @brief Method GetOrCreateMemLabel, addr 0x182249930, size 0x1e0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetOrCreateMemLabel(::StringW  areaName, ::StringW  objectName) ;

/// @brief Method GetOrCreateMemLabel_Injected, addr 0x182249910, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetOrCreateMemLabel_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  areaName, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  objectName) ;

/// @brief Method GetOrCreateMemLabel__Unmanaged, addr 0x182249920, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetOrCreateMemLabel__Unmanaged(uint8_t*  areaName, int32_t  areaNameLen, uint8_t*  objectName, int32_t  objectNameLen) ;

/// @brief Method SetMarkerMetadata, addr 0x182249b40, size 0x130, virtual false, abstract: false, final false
static inline void SetMarkerMetadata(::System::IntPtr  markerPtr, int32_t  index, ::StringW  name, uint8_t  type, uint8_t  unit) ;

/// @brief Method SetMarkerMetadata_Injected, addr 0x182249b10, size 0x10, virtual false, abstract: false, final false
static inline void SetMarkerMetadata_Injected(::System::IntPtr  markerPtr, int32_t  index, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, uint8_t  type, uint8_t  unit) ;

/// @brief Method SetMarkerMetadata__Unmanaged, addr 0x182249b20, size 0x20, virtual false, abstract: false, final false
static inline void SetMarkerMetadata__Unmanaged(::System::IntPtr  markerPtr, int32_t  index, uint8_t*  name, int32_t  nameLen, uint8_t  type, uint8_t  unit) ;

/// @brief Method SingleSampleWithMetadata, addr 0x182249c70, size 0x10, virtual false, abstract: false, final false
static inline void SingleSampleWithMetadata(::System::IntPtr  markerPtr, int32_t  metadataCount, void*  metadata) ;

/// @brief Method Utf8ToString, addr 0x182249c80, size 0x90, virtual false, abstract: false, final false
static inline ::StringW Utf8ToString(uint8_t*  chars, int32_t  charsLen) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProfilerUnsafeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProfilerUnsafeUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProfilerUnsafeUtility(ProfilerUnsafeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProfilerUnsafeUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProfilerUnsafeUtility(ProfilerUnsafeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10333};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility) == 0x10, "Size mismatch!");

} // namespace end def Unity::Profiling::LowLevel::Unsafe
