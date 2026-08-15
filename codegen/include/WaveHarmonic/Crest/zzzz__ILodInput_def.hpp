#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ILodInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ILodInput)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Rect;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class IReportWaveDisplacement;
}
namespace WaveHarmonic::Crest {
class IReportsDisplacement;
}
namespace WaveHarmonic::Crest {
class IReportsHeight;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ILodInput;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ILodInput*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ILodInput*, "WaveHarmonic.Crest", "ILodInput");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ILodInput
class CORDL_TYPE ILodInput {
public:
// Declarations
 __declspec(property(get=get_Component)) ::UnityW<::UnityEngine::MonoBehaviour>  Component;

 __declspec(property(get=get_DisplacementReporter)) ::WaveHarmonic::Crest::IReportsDisplacement*  DisplacementReporter;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_HeightReporter)) ::WaveHarmonic::Crest::IReportsHeight*  HeightReporter;

 __declspec(property(get=get_IsCompute)) bool  IsCompute;

 __declspec(property(get=get_Order)) int32_t  Order;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_Queue)) int32_t  Queue;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

 __declspec(property(get=get_WaveDisplacementReporter)) ::WaveHarmonic::Crest::IReportWaveDisplacement*  WaveDisplacementReporter;

/// @brief Method Attach, addr 0x182559410, size 0x60, virtual false, abstract: false, final false
static inline void Attach(::WaveHarmonic::Crest::ILodInput*  input, ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  inputs) ;

/// @brief Method Detach, addr 0x182559470, size 0x30, virtual false, abstract: false, final false
static inline void Detach(::WaveHarmonic::Crest::ILodInput*  input, ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  inputs) ;

/// @brief Method Draw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method Filter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

/// @brief Method get_Component, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::MonoBehaviour> get_Component() ;

/// @brief Method get_DisplacementReporter, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::IReportsDisplacement* get_DisplacementReporter() ;

/// @brief Method get_Enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_HeightReporter, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::IReportsHeight* get_HeightReporter() ;

/// @brief Method get_IsCompute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsCompute() ;

/// @brief Method get_Order, addr 0x1825594a0, size 0xe0, virtual true, abstract: false, final false
inline int32_t get_Order() ;

/// @brief Method get_Pass, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Pass() ;

/// @brief Method get_Queue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Queue() ;

/// @brief Method get_Rect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Method get_WaveDisplacementReporter, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::IReportWaveDisplacement* get_WaveDisplacementReporter() ;

// Ctor Parameters [CppParam { name: "", ty: "ILodInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILodInput(ILodInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16553};

/// @brief Field k_QueueMaximumSubIndex offset 0xffffffff size 0x4
static constexpr int32_t  k_QueueMaximumSubIndex{static_cast<int32_t>(0x3e8)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
