#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableHandle)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableHandle, "UnityEngine.Playables", "PlayableHandle");
// Dependencies System.IntPtr
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableHandle
struct CORDL_TYPE PlayableHandle {
public:
// Declarations
/// @brief Field m_Null, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_Null, put=setStaticF_m_Null)) ::UnityEngine::Playables::PlayableHandle  m_Null;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>*() ;

/// @brief Method CheckInputBounds, addr 0x1822811f0, size 0x20, virtual false, abstract: false, final false
inline bool CheckInputBounds(int32_t  inputIndex) ;

/// @brief Method CheckInputBounds, addr 0x182281210, size 0x140, virtual false, abstract: false, final false
inline bool CheckInputBounds(int32_t  inputIndex, bool  acceptAny) ;

/// @brief Method CompareVersion, addr 0x180bbb1e0, size 0x80, virtual false, abstract: false, final false
static inline bool CompareVersion(::UnityEngine::Playables::PlayableHandle  lhs, ::UnityEngine::Playables::PlayableHandle  rhs) ;

/// @brief Method Destroy, addr 0x182281350, size 0x60, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method Equals, addr 0x182281440, size 0x60, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Playables::PlayableHandle  other) ;

/// @brief Method Equals, addr 0x1822813b0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  p) ;

/// @brief Method GetGraph, addr 0x1822814b0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph GetGraph() ;

/// @brief Method GetGraph_Injected, addr 0x1822814a0, size 0x10, virtual false, abstract: false, final false
static inline void GetGraph_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph>  ret) ;

/// @brief Method GetHashCode, addr 0x182281510, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetInput, addr 0x1822815e0, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::Playable GetInput(int32_t  inputPort) ;

/// @brief Method GetInputCount, addr 0x182281550, size 0x20, virtual false, abstract: false, final false
inline int32_t GetInputCount() ;

/// @brief Method GetInputHandle, addr 0x182281580, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableHandle GetInputHandle(int32_t  index) ;

/// @brief Method GetInputHandle_Injected, addr 0x182281570, size 0x10, virtual false, abstract: false, final false
static inline void GetInputHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Playables::PlayableHandle>  ret) ;

/// @brief Method GetJobData, addr 0x182281650, size 0x20, virtual false, abstract: false, final false
inline ::System::IntPtr GetJobData() ;

/// @brief Method GetJobType, addr 0x182281670, size 0x20, virtual false, abstract: false, final false
inline ::System::Type* GetJobType() ;

/// @brief Method GetObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetObject() ;

/// @brief Method GetOutput, addr 0x182281700, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::Playable GetOutput(int32_t  outputPort) ;

/// @brief Method GetOutputHandle, addr 0x1822816a0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableHandle GetOutputHandle(int32_t  index) ;

/// @brief Method GetOutputHandle_Injected, addr 0x182281690, size 0x10, virtual false, abstract: false, final false
static inline void GetOutputHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Playables::PlayableHandle>  ret) ;

/// @brief Method GetPlayableType, addr 0x182281770, size 0x20, virtual false, abstract: false, final false
inline ::System::Type* GetPlayableType() ;

/// @brief Method GetScriptInstance, addr 0x182281790, size 0x20, virtual false, abstract: false, final false
inline ::System::Object* GetScriptInstance() ;

/// @brief Method GetSpeed, addr 0x1822817b0, size 0x20, virtual false, abstract: false, final false
inline double_t GetSpeed() ;

/// @brief Method GetTime, addr 0x1822817d0, size 0x20, virtual false, abstract: false, final false
inline double_t GetTime() ;

/// @brief Method IsPlayableOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool IsPlayableOfType() ;

/// @brief Method IsValid, addr 0x1822817f0, size 0x20, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method Pause, addr 0x182281810, size 0x20, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Play, addr 0x182281830, size 0x20, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method SetDuration, addr 0x182281850, size 0x20, virtual false, abstract: false, final false
inline void SetDuration(double_t  value) ;

/// @brief Method SetInputCount, addr 0x182281870, size 0x20, virtual false, abstract: false, final false
inline void SetInputCount(int32_t  value) ;

/// @brief Method SetInputWeight, addr 0x1822818b0, size 0x70, virtual false, abstract: false, final false
inline bool SetInputWeight(int32_t  inputIndex, float_t  weight) ;

/// @brief Method SetInputWeightFromIndex, addr 0x182281890, size 0x20, virtual false, abstract: false, final false
inline void SetInputWeightFromIndex(int32_t  index, float_t  weight) ;

/// @brief Method SetScriptInstance, addr 0x182281920, size 0x20, virtual false, abstract: false, final false
inline void SetScriptInstance(::System::Object*  scriptInstance) ;

/// @brief Method SetSpeed, addr 0x182281940, size 0x20, virtual false, abstract: false, final false
inline void SetSpeed(double_t  value) ;

/// @brief Method SetTime, addr 0x182281960, size 0x20, virtual false, abstract: false, final false
inline void SetTime(double_t  value) ;

static inline ::UnityEngine::Playables::PlayableHandle getStaticF_m_Null() ;

/// @brief Method get_Null, addr 0x1822819b0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableHandle get_Null() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>* i___System__IEquatable_1___UnityEngine__Playables__PlayableHandle_() ;

/// @brief Method op_Equality, addr 0x182281440, size 0x60, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Playables::PlayableHandle  x, ::UnityEngine::Playables::PlayableHandle  y) ;

static inline void setStaticF_m_Null(::UnityEngine::Playables::PlayableHandle  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayableHandle() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PlayableHandle(::System::IntPtr  m_Handle, uint32_t  m_Version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11072};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Handle;

/// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableHandle, m_Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableHandle, m_Version) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Playables::PlayableHandle) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Playables
