#pragma once
// IWYU pragma private; include "UnityEngine/Animations/ProcessAnimationJobStruct_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessAnimationJobStruct_1)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace UnityEngine::Animations {
template<typename T>
class ProcessAnimationJobStruct_1_ExecuteJobFunction;
}
// Forward declare root types
namespace UnityEngine::Animations {
template<typename T>
class ProcessAnimationJobStruct_1_ExecuteJobFunction;
}
namespace UnityEngine::Animations {
template<typename T>
struct ProcessAnimationJobStruct_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction);
MARK_GEN_VAL_T(::UnityEngine::Animations::ProcessAnimationJobStruct_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction, "UnityEngine.Animations", "ProcessAnimationJobStruct`1/ExecuteJobFunction");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Animations::ProcessAnimationJobStruct_1, "UnityEngine.Animations", "ProcessAnimationJobStruct`1");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Animations {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Animations.ProcessAnimationJobStruct`1/ExecuteJobFunction<T>
class CORDL_TYPE ProcessAnimationJobStruct_1_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::by_ref<T>  data, ::System::IntPtr  animationStreamPtr, ::System::IntPtr  unusedPtr, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

static inline ::UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProcessAnimationJobStruct_1_ExecuteJobFunction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProcessAnimationJobStruct_1_ExecuteJobFunction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProcessAnimationJobStruct_1_ExecuteJobFunction(ProcessAnimationJobStruct_1_ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProcessAnimationJobStruct_1_ExecuteJobFunction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProcessAnimationJobStruct_1_ExecuteJobFunction(ProcessAnimationJobStruct_1_ExecuteJobFunction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19930};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
// Dependencies System.IntPtr
namespace UnityEngine::Animations {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Animations.ProcessAnimationJobStruct`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE ProcessAnimationJobStruct_1 {
public:
// Declarations
using ExecuteJobFunction = ::UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction<T>;

/// @brief Field jobReflectionData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_jobReflectionData, put=setStaticF_jobReflectionData)) ::System::IntPtr  jobReflectionData;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Execute(::by_ref<T>  data, ::System::IntPtr  animationStreamPtr, ::System::IntPtr  methodIndex, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

/// @brief Method GetJobReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::IntPtr GetJobReflectionData() ;

static inline ::System::IntPtr getStaticF_jobReflectionData() ;

static inline void setStaticF_jobReflectionData(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ProcessAnimationJobStruct_1() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19931};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def UnityEngine::Animations
