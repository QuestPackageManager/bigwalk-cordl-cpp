#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/CustomControllerControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ComponentControls/zzzz__ComponentControl_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomControllerControl)
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTargetSet;
}
namespace Rewired::ComponentControls::Data {
class CustomControllerElementTarget;
}
namespace Rewired::ComponentControls {
class CustomController;
}
namespace Rewired::ComponentControls {
class IComponentController;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::ComponentControls {
class CustomControllerControl;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::CustomControllerControl*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::CustomControllerControl*, "Rewired.ComponentControls", "CustomControllerControl");
// Dependencies Rewired.ComponentControls.ComponentControl
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.CustomControllerControl
class CORDL_TYPE CustomControllerControl : public ::Rewired::ComponentControls::ComponentControl {
public:
// Declarations
 __declspec(property(get=aXHapebCOwbPSLfqqktYfVibKLKAb)) ::UnityW<::Rewired::ComponentControls::CustomController>  RmTnOXpVojLkBhZWiKVxjeuBDEOaA;

 __declspec(property(get=VGNBIvDnVMTTlVbiwEVGrQlUDvHQ)) bool  jHlJjYGsjvLRJcifXdJpmcbxDfQO;

/// @brief Method CiOGDEknlIqnxgAKuDaQEgrKjrMeB, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CiOGDEknlIqnxgAKuDaQEgrKjrMeB() ;

/// @brief Method FindController, addr 0x1818d6f30, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::ComponentControls::IComponentController* FindController() ;

/// @brief Method GetRequiredControllerType, addr 0x1818d6f50, size 0x10, virtual true, abstract: false, final false
inline ::System::Type* GetRequiredControllerType() ;

/// @brief Method MxhsUyEUyXUqykEmvAcaRoqsphCm, addr 0x1818d6f60, size 0x150, virtual false, abstract: false, final false
inline void MxhsUyEUyXUqykEmvAcaRoqsphCm(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::ComponentControls::CustomControllerControl* New_ctor() ;

/// @brief Method RxuDHvJThQspZsgvosEiMQVFsvMU, addr 0x1818d70b0, size 0x170, virtual true, abstract: false, final false
inline void RxuDHvJThQspZsgvosEiMQVFsvMU() ;

/// @brief Method VGNBIvDnVMTTlVbiwEVGrQlUDvHQ, addr 0x1818d7220, size 0x60, virtual true, abstract: false, final false
inline bool VGNBIvDnVMTTlVbiwEVGrQlUDvHQ() ;

/// @brief Method VjFBHchBsLZQUGaSwGfKBPnptmOuA, addr 0x1818d7280, size 0x100, virtual false, abstract: false, final false
inline void VjFBHchBsLZQUGaSwGfKBPnptmOuA(::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method WwbkdFtDKSPMhykGUtevBBebTAVI, addr 0x1818d7380, size 0x1e0, virtual false, abstract: false, final false
inline void WwbkdFtDKSPMhykGUtevBBebTAVI(::Rewired::ComponentControls::Data::CustomControllerElementTarget*  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x1818d68c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method aXHapebCOwbPSLfqqktYfVibKLKAb, addr 0x1818d7560, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::Rewired::ComponentControls::CustomController> aXHapebCOwbPSLfqqktYfVibKLKAb() ;

/// @brief Method jeTFEUcIWZOvWPHtZWjBxepakhrL, addr 0x1818d75b0, size 0x50, virtual false, abstract: false, final false
inline void jeTFEUcIWZOvWPHtZWjBxepakhrL() ;

/// @brief Method owOEzFsGAWSzqDgDzgIfCpTKpJEe, addr 0x1818d7600, size 0x140, virtual true, abstract: false, final false
inline void owOEzFsGAWSzqDgDzgIfCpTKpJEe() ;

/// @brief Method zvtmtIfDLqZQlMGZbEAvfYhSmlefA, addr 0x1818d7740, size 0xe0, virtual false, abstract: false, final false
inline void zvtmtIfDLqZQlMGZbEAvfYhSmlefA(::Rewired::ComponentControls::Data::CustomControllerElementTargetSet*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControllerControl(CustomControllerControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControllerControl(CustomControllerControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2741};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ComponentControls::CustomControllerControl) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
