#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableGraph)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Playables {
struct DirectorUpdateMode;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine {
class IExposedPropertyTable;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableGraph);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableGraph, "UnityEngine.Playables", "PlayableGraph");
// Dependencies System.IntPtr
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableGraph
struct CORDL_TYPE PlayableGraph {
public:
// Declarations
/// @brief Method Connect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U,typename V>
inline bool Connect(U  source, int32_t  sourceOutputPort, V  destination, int32_t  destinationInputPort) ;

/// @brief Method ConnectInternal, addr 0x182280b80, size 0x60, virtual false, abstract: false, final false
inline bool ConnectInternal(::UnityEngine::Playables::PlayableHandle  source, int32_t  sourceOutputPort, ::UnityEngine::Playables::PlayableHandle  destination, int32_t  destinationInputPort) ;

/// @brief Method ConnectInternal_Injected, addr 0x182280b70, size 0x10, virtual false, abstract: false, final false
static inline bool ConnectInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle>  source, int32_t  sourceOutputPort, ::by_ref<::UnityEngine::Playables::PlayableHandle>  destination, int32_t  destinationInputPort) ;

/// @brief Method Create, addr 0x182280d80, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableGraph Create() ;

/// @brief Method Create, addr 0x182280da0, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableGraph Create(::StringW  name) ;

/// @brief Method CreatePlayableHandle, addr 0x182280bf0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableHandle CreatePlayableHandle() ;

/// @brief Method CreatePlayableHandle_Injected, addr 0x182280be0, size 0x10, virtual false, abstract: false, final false
static inline void CreatePlayableHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle>  ret) ;

/// @brief Method CreateScriptOutputInternal, addr 0x182280c60, size 0x110, virtual false, abstract: false, final false
inline bool CreateScriptOutputInternal(::StringW  name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle) ;

/// @brief Method CreateScriptOutputInternal_Injected, addr 0x182280c50, size 0x10, virtual false, abstract: false, final false
static inline bool CreateScriptOutputInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle) ;

/// @brief Method Create_Injected, addr 0x182280d70, size 0x10, virtual false, abstract: false, final false
static inline void Create_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Playables::PlayableGraph>  ret) ;

/// @brief Method Destroy, addr 0x182280fc0, size 0x20, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method DestroyOutput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
inline void DestroyOutput(U  output) ;

/// @brief Method DestroyOutputInternal, addr 0x182280ee0, size 0x40, virtual false, abstract: false, final false
inline void DestroyOutputInternal(::UnityEngine::Playables::PlayableOutputHandle  handle) ;

/// @brief Method DestroyOutputInternal_Injected, addr 0x182280ed0, size 0x10, virtual false, abstract: false, final false
static inline void DestroyOutputInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle) ;

/// @brief Method DestroyPlayable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
inline void DestroyPlayable(U  playable) ;

/// @brief Method DestroyPlayableInternal, addr 0x182280f30, size 0x40, virtual false, abstract: false, final false
inline void DestroyPlayableInternal(::UnityEngine::Playables::PlayableHandle  playable) ;

/// @brief Method DestroyPlayableInternal_Injected, addr 0x182280f20, size 0x10, virtual false, abstract: false, final false
static inline void DestroyPlayableInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle>  playable) ;

/// @brief Method DestroySubgraph, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
inline void DestroySubgraph(U  playable) ;

/// @brief Method DestroySubgraphInternal, addr 0x182280f80, size 0x40, virtual false, abstract: false, final false
inline void DestroySubgraphInternal(::UnityEngine::Playables::PlayableHandle  playable) ;

/// @brief Method DestroySubgraphInternal_Injected, addr 0x182280f70, size 0x10, virtual false, abstract: false, final false
static inline void DestroySubgraphInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle>  playable) ;

/// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
inline void Disconnect(U  input, int32_t  inputPort) ;

/// @brief Method DisconnectInternal, addr 0x182280ff0, size 0x40, virtual false, abstract: false, final false
inline void DisconnectInternal(::UnityEngine::Playables::PlayableHandle  playable, int32_t  inputPort) ;

/// @brief Method DisconnectInternal_Injected, addr 0x182280fe0, size 0x10, virtual false, abstract: false, final false
static inline void DisconnectInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle>  playable, int32_t  inputPort) ;

/// @brief Method Evaluate, addr 0x182281040, size 0x10, virtual false, abstract: false, final false
inline void Evaluate() ;

/// @brief Method Evaluate, addr 0x182281030, size 0x10, virtual false, abstract: false, final false
inline void Evaluate(float_t  deltaTime) ;

/// @brief Method GetOutput, addr 0x182281090, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableOutput GetOutput(int32_t  index) ;

/// @brief Method GetOutputCount, addr 0x182281050, size 0x20, virtual false, abstract: false, final false
inline int32_t GetOutputCount() ;

/// @brief Method GetOutputInternal, addr 0x182281070, size 0x20, virtual false, abstract: false, final false
inline bool GetOutputInternal(int32_t  index, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle) ;

/// @brief Method GetTimeUpdateMode, addr 0x182281140, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorUpdateMode GetTimeUpdateMode() ;

/// @brief Method IsDone, addr 0x182281150, size 0x20, virtual false, abstract: false, final false
inline bool IsDone() ;

/// @brief Method IsValid, addr 0x182281170, size 0x10, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method Play, addr 0x182281180, size 0x20, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method SetResolver, addr 0x1822811a0, size 0x20, virtual false, abstract: false, final false
inline void SetResolver(::UnityEngine::IExposedPropertyTable*  value) ;

/// @brief Method SetTimeUpdateMode, addr 0x1822811c0, size 0x10, virtual false, abstract: false, final false
inline void SetTimeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode  value) ;

/// @brief Method Stop, addr 0x1822811d0, size 0x20, virtual false, abstract: false, final false
inline void Stop() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayableGraph() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PlayableGraph(::System::IntPtr  m_Handle, uint32_t  m_Version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11070};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Handle;

/// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableGraph, m_Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableGraph, m_Version) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Playables::PlayableGraph) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Playables
