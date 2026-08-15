#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FoamLodInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__LodInput_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FoamLodInput)
namespace UnityEngine {
struct Color;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
struct LodInputMode;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class FoamLodInput;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::FoamLodInput*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FoamLodInput*, "WaveHarmonic.Crest", "FoamLodInput");
// Dependencies WaveHarmonic.Crest.LodInput
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FoamLodInput
class CORDL_TYPE FoamLodInput : public ::WaveHarmonic::Crest::LodInput {
public:
// Declarations
 __declspec(property(get=get_DefaultMode)) ::WaveHarmonic::Crest::LodInputMode  DefaultMode;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

/// @brief Method InferBlend, addr 0x182558980, size 0x20, virtual true, abstract: false, final false
inline void InferBlend() ;

static inline ::WaveHarmonic::Crest::FoamLodInput* New_ctor() ;

/// @brief Method .ctor, addr 0x18254fcf0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultMode, addr 0x1802ee400, size 0x10, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::LodInputMode get_DefaultMode() ;

/// @brief Method get_GizmoColor, addr 0x1825589a0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_Inputs, addr 0x1825589e0, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FoamLodInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FoamLodInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FoamLodInput(FoamLodInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FoamLodInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FoamLodInput(FoamLodInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16520};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::FoamLodInput) == 0xb0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
