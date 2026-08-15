#pragma once
// IWYU pragma private; include "Rewired/Profiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Profiler)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Rewired {
class Profiler;
}
// Write type traits
MARK_REF_T(::Rewired::Profiler*);
DEFINE_IL2CPP_CLASS(::Rewired::Profiler*, "Rewired", "Profiler");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Profiler
class CORDL_TYPE Profiler : public ::System::Object {
public:
// Declarations
/// @brief Method AddFramesFromFile, addr 0x181846780, size 0x10, virtual false, abstract: false, final false
static inline void AddFramesFromFile(::StringW  file) ;

/// @brief Method BeginSample, addr 0x181846780, size 0x10, virtual false, abstract: false, final false
static inline void BeginSample(::StringW  name) ;

/// @brief Method BeginSample, addr 0x181846780, size 0x10, virtual false, abstract: false, final false
static inline void BeginSample(::StringW  name, ::UnityEngine::Object*  targetObject) ;

/// @brief Method EndSample, addr 0x181846780, size 0x10, virtual false, abstract: false, final false
static inline void EndSample() ;

/// @brief Method FFDQSRDlMwwhNuoSkDVQErzPPgUU, addr 0x181846780, size 0x10, virtual false, abstract: false, final false
static inline void FFDQSRDlMwwhNuoSkDVQErzPPgUU() ;

/// @brief Method GetMonoHeapSize, addr 0x181846790, size 0x20, virtual false, abstract: false, final false
static inline uint32_t GetMonoHeapSize() ;

/// @brief Method GetMonoHeapSizeLong, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline int64_t GetMonoHeapSizeLong() ;

/// @brief Method GetMonoUsedSize, addr 0x181846790, size 0x20, virtual false, abstract: false, final false
static inline uint32_t GetMonoUsedSize() ;

/// @brief Method GetMonoUsedSizeLong, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline int64_t GetMonoUsedSizeLong() ;

/// @brief Method GetRuntimeMemorySize, addr 0x181846790, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetRuntimeMemorySize(::UnityEngine::Object*  o) ;

/// @brief Method GetRuntimeMemorySizeLong, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline int64_t GetRuntimeMemorySizeLong(::UnityEngine::Object*  o) ;

/// @brief Method GetTotalAllocatedMemory, addr 0x181846790, size 0x20, virtual false, abstract: false, final false
static inline uint32_t GetTotalAllocatedMemory() ;

/// @brief Method GetTotalAllocatedMemoryLong, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline int64_t GetTotalAllocatedMemoryLong() ;

/// @brief Method GetTotalReservedMemory, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline uint32_t GetTotalReservedMemory() ;

/// @brief Method GetTotalReservedMemoryLong, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline int64_t GetTotalReservedMemoryLong() ;

/// @brief Method GetTotalUnusedReservedMemory, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline uint32_t GetTotalUnusedReservedMemory() ;

/// @brief Method GetTotalUnusedReservedMemoryLong, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline int64_t GetTotalUnusedReservedMemoryLong() ;

/// @brief Method get_enableBinaryLog, addr 0x1818467b0, size 0x20, virtual false, abstract: false, final false
static inline bool get_enableBinaryLog() ;

/// @brief Method get_enabled, addr 0x1818467b0, size 0x20, virtual false, abstract: false, final false
static inline bool get_enabled() ;

/// @brief Method get_logFile, addr 0x1818467d0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW get_logFile() ;

/// @brief Method get_supported, addr 0x1818467b0, size 0x20, virtual false, abstract: false, final false
static inline bool get_supported() ;

/// @brief Method get_usedHeapSize, addr 0x181846790, size 0x20, virtual false, abstract: false, final false
static inline uint32_t get_usedHeapSize() ;

/// @brief Method get_usedHeapSizeLong, addr 0x181846790, size 0x20, virtual false, abstract: false, final false
static inline int64_t get_usedHeapSizeLong() ;

/// @brief Method set_enableBinaryLog, addr 0x181846780, size 0x10, virtual false, abstract: false, final false
static inline void set_enableBinaryLog(bool  value) ;

/// @brief Method set_enabled, addr 0x181846780, size 0x10, virtual false, abstract: false, final false
static inline void set_enabled(bool  value) ;

/// @brief Method set_logFile, addr 0x181846780, size 0x10, virtual false, abstract: false, final false
static inline void set_logFile(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Profiler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Profiler(Profiler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Profiler(Profiler const& ) = delete;

/// @brief Field DbfUIUIcTFnildsBjvPSFmxddMGBA offset 0xffffffff size 0x8
static constexpr ::ConstString  DbfUIUIcTFnildsBjvPSFmxddMGBA{u"ENABLE_PROFILER must be set in Rewired Core to use the profiler."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1805};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Profiler) == 0x10, "Size mismatch!");

} // namespace end def Rewired
