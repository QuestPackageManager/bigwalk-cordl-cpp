#pragma once
// IWYU pragma private; include "Rewired/Controller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__CompoundControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerPollingInfo_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Controller)
namespace GlobalNamespace {
class mgEoYhWDNSuilPYVDQosKwaMZrnc;
}
namespace GlobalNamespace {
class vVuTuzUuxxOIXOMdnKGOVxGIoAOK;
}
namespace Rewired::Config {
struct UpdateLoopSetting;
}
namespace Rewired::Data::Mapping {
class HardwareAxisInfo;
}
namespace Rewired::Data::Mapping {
class HardwareButtonInfo;
}
namespace Rewired::Interfaces {
class IControllerExtensionSource;
}
namespace Rewired::Internal::Localization {
class DeviceLocalizationInfo;
}
namespace Rewired::Internal::Localization {
class ITryGetLocalizedName;
}
namespace Rewired::Internal::Localization {
class LocalizedString;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
class AxisCalibration;
}
namespace Rewired {
struct AxisCoordinateMode;
}
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
class Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc;
}
namespace Rewired {
struct ButtonStateFlags;
}
namespace Rewired {
class ButtonStateRecorder;
}
namespace Rewired {
class Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou;
}
namespace Rewired {
class CalibrationMap;
}
namespace Rewired {
struct CompoundControllerElementType;
}
namespace Rewired {
class CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA;
}
namespace Rewired {
class ControllerDataUpdater;
}
namespace Rewired {
class ControllerElementIdentifier;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
struct ControllerIdentifier;
}
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
struct ControllerPollingInfo;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller_Axis2D;
}
namespace Rewired {
class Controller_Axis;
}
namespace Rewired {
class Controller_Button;
}
namespace Rewired {
class Controller_CompoundElement;
}
namespace Rewired {
class Controller_DirectionalPad;
}
namespace Rewired {
class Controller_Element;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class Controller_Hat;
}
namespace Rewired {
class Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE;
}
namespace Rewired {
class Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn;
}
namespace Rewired {
class Controller_NxyOYzPlObaVereoMOyhDIIMlLlk;
}
namespace Rewired {
class Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace Rewired {
class IControllerTemplate;
}
namespace Rewired {
struct InputSource;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace Rewired {
class aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb;
}
namespace Rewired {
class aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc;
}
namespace Rewired {
class kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG;
}
namespace Rewired {
class xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired {
class Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc;
}
namespace Rewired {
class Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou;
}
namespace Rewired {
class CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class Controller_Axis;
}
namespace Rewired {
class Controller_Axis2D;
}
namespace Rewired {
class Controller_Button;
}
namespace Rewired {
class Controller_CompoundElement;
}
namespace Rewired {
class Controller_DirectionalPad;
}
namespace Rewired {
class Controller_Element;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class Controller_Hat;
}
namespace Rewired {
class Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE;
}
namespace Rewired {
class Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn;
}
namespace Rewired {
class Controller_NxyOYzPlObaVereoMOyhDIIMlLlk;
}
namespace Rewired {
class Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA;
}
namespace Rewired {
class aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb;
}
namespace Rewired {
class aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc;
}
namespace Rewired {
class kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG;
}
namespace Rewired {
class xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb;
}
// Write type traits
MARK_REF_T(::Rewired::Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc*);
MARK_REF_T(::Rewired::Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou*);
MARK_REF_T(::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA*);
MARK_REF_T(::Rewired::Controller*);
MARK_REF_T(::Rewired::Controller_Axis*);
MARK_REF_T(::Rewired::Controller_Axis2D*);
MARK_REF_T(::Rewired::Controller_Button*);
MARK_REF_T(::Rewired::Controller_CompoundElement*);
MARK_REF_T(::Rewired::Controller_DirectionalPad*);
MARK_REF_T(::Rewired::Controller_Element*);
MARK_REF_T(::Rewired::Controller_Extension*);
MARK_REF_T(::Rewired::Controller_Hat*);
MARK_REF_T(::Rewired::Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE*);
MARK_REF_T(::Rewired::Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn*);
MARK_REF_T(::Rewired::Controller_NxyOYzPlObaVereoMOyhDIIMlLlk*);
MARK_REF_T(::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA*);
MARK_REF_T(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb*);
MARK_REF_T(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc*);
MARK_REF_T(::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*);
MARK_REF_T(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb*);
DEFINE_IL2CPP_CLASS(::Rewired::Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc*, "Rewired", "Controller/Axis/xyXVloKjjCbkNjVbRoiXjyXBKasBc");
DEFINE_IL2CPP_CLASS(::Rewired::Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou*, "Rewired", "Controller/Button/aVUAuemcxAoyqjzvzcgheaWHiSou");
DEFINE_IL2CPP_CLASS(::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA*, "Rewired", "Controller/CompoundElement/xVfBJkhaixVsvOdQJHsyxJPicLqIA");
DEFINE_IL2CPP_CLASS(::Rewired::Controller*, "Rewired", "Controller");
DEFINE_IL2CPP_CLASS(::Rewired::Controller_Axis*, "Rewired", "Controller/Axis");
DEFINE_IL2CPP_CLASS(::Rewired::Controller_Axis2D*, "Rewired", "Controller/Axis2D");
DEFINE_IL2CPP_CLASS(::Rewired::Controller_Button*, "Rewired", "Controller/Button");
DEFINE_IL2CPP_CLASS(::Rewired::Controller_CompoundElement*, "Rewired", "Controller/CompoundElement");
DEFINE_IL2CPP_CLASS(::Rewired::Controller_DirectionalPad*, "Rewired", "Controller/DirectionalPad");
DEFINE_IL2CPP_CLASS(::Rewired::Controller_Element*, "Rewired", "Controller/Element");
DEFINE_IL2CPP_CLASS(::Rewired::Controller_Extension*, "Rewired", "Controller/Extension");
DEFINE_IL2CPP_CLASS(::Rewired::Controller_Hat*, "Rewired", "Controller/Hat");
DEFINE_IL2CPP_CLASS(::Rewired::Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE*, "Rewired", "Controller/KGoGwPbjCefXXnmvLcXEtSuacaEE");
DEFINE_IL2CPP_CLASS(::Rewired::Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn*, "Rewired", "Controller/LmXrKYTYLIiFAIojUkxWncBmVqUn");
DEFINE_IL2CPP_CLASS(::Rewired::Controller_NxyOYzPlObaVereoMOyhDIIMlLlk*, "Rewired", "Controller/NxyOYzPlObaVereoMOyhDIIMlLlk");
DEFINE_IL2CPP_CLASS(::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA*, "Rewired", "Controller/Element/kfNwihGjmEjMLeDKdWYkfxjklQFVA");
DEFINE_IL2CPP_CLASS(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb*, "Rewired", "Controller/Button/aVUAuemcxAoyqjzvzcgheaWHiSou/VnzudaVmZSnJZEdkbSxtNHnPGNzb");
DEFINE_IL2CPP_CLASS(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc*, "Rewired", "Controller/Button/aVUAuemcxAoyqjzvzcgheaWHiSou/YNwdUTRvwsDcIWWhQYSAOvoGNayc");
DEFINE_IL2CPP_CLASS(::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*, "Rewired", "Controller/Element/kfNwihGjmEjMLeDKdWYkfxjklQFVA/tCWrtXjiRvoOCcFDpNPkTuFWOLAG");
DEFINE_IL2CPP_CLASS(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb*, "Rewired", "Controller/Axis/xyXVloKjjCbkNjVbRoiXjyXBKasBc/qQZdqCGVbkfaMgCxWUpkDGzqrnagb");
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Element/kfNwihGjmEjMLeDKdWYkfxjklQFVA/tCWrtXjiRvoOCcFDpNPkTuFWOLAG
class CORDL_TYPE kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG : public ::System::Object {
public:
// Declarations
/// @brief Method JnkcNMhfLQpiHDdWgQCOZMKgkXSKc, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void JnkcNMhfLQpiHDdWgQCOZMKgkXSKc() ;

static inline ::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG(kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG(kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1813};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::Element::kfNwihGjmEjMLeDKdWYkfxjklQFVA::tCWrtXjiRvoOCcFDpNPkTuFWOLAG, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Element/kfNwihGjmEjMLeDKdWYkfxjklQFVA
class CORDL_TYPE Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA : public ::System::Object {
public:
// Declarations
using tCWrtXjiRvoOCcFDpNPkTuFWOLAG = ::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG;

/// @brief Field FblKlmdxaXSHZlCGGjSTzKaTaCBHA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FblKlmdxaXSHZlCGGjSTzKaTaCBHA, put=__cordl_internal_set_FblKlmdxaXSHZlCGGjSTzKaTaCBHA)) ::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*  FblKlmdxaXSHZlCGGjSTzKaTaCBHA;

/// @brief Field SlQpMdLJIQHZXRNLCGrVTgkolyXi, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SlQpMdLJIQHZXRNLCGrVTgkolyXi, put=__cordl_internal_set_SlQpMdLJIQHZXRNLCGrVTgkolyXi)) ::ArrayW<int32_t>  SlQpMdLJIQHZXRNLCGrVTgkolyXi;

/// @brief Field ToLHCNEXsVCKOiGjDdxYAqmAjaKS, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ToLHCNEXsVCKOiGjDdxYAqmAjaKS, put=__cordl_internal_set_ToLHCNEXsVCKOiGjDdxYAqmAjaKS)) int32_t  ToLHCNEXsVCKOiGjDdxYAqmAjaKS;

/// @brief Field ZnfPQPRprdTHMKPwJKwOVHljosor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZnfPQPRprdTHMKPwJKwOVHljosor, put=__cordl_internal_set_ZnfPQPRprdTHMKPwJKwOVHljosor)) ::ArrayW<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*>  ZnfPQPRprdTHMKPwJKwOVHljosor;

 __declspec(property(put=MmGjFiTgHorWKEmPrvbPmrIJuQwf)) ::Rewired::UpdateLoopType  eKZYHMepLjoEjUezhZsJLiHCDBVE;

/// @brief Field hZmHHnYvGvpniuvItYvugzUtmEhK, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_hZmHHnYvGvpniuvItYvugzUtmEhK, put=__cordl_internal_set_hZmHHnYvGvpniuvItYvugzUtmEhK)) int32_t  hZmHHnYvGvpniuvItYvugzUtmEhK;

 __declspec(property(get=jynpgtmEaUVjcHHivATJhFvGHPJE)) ::System::Collections::Generic::IList_1<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*>*  jlNCRndhZFutokxWtymxhgCtHFylA;

/// @brief Field yfwXwslaHsunPnCzypFrGpzoajBj, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_yfwXwslaHsunPnCzypFrGpzoajBj, put=__cordl_internal_set_yfwXwslaHsunPnCzypFrGpzoajBj)) int32_t  yfwXwslaHsunPnCzypFrGpzoajBj;

/// @brief Field ywxDdYjClxCHaNaLdMEEdfyOZUlI, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ywxDdYjClxCHaNaLdMEEdfyOZUlI, put=__cordl_internal_set_ywxDdYjClxCHaNaLdMEEdfyOZUlI)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*>*  ywxDdYjClxCHaNaLdMEEdfyOZUlI;

/// @brief Method MmGjFiTgHorWKEmPrvbPmrIJuQwf, addr 0x18185e5c0, size 0x50, virtual false, abstract: false, final false
inline void MmGjFiTgHorWKEmPrvbPmrIJuQwf(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA* New_ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SyxvFeGGRaZyDIdsKtMxALlFVsgR, addr 0x18185e610, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG* SyxvFeGGRaZyDIdsKtMxALlFVsgR(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method TffLqHUFrejnNAtavbmvIJWMDxsP, addr 0x18185e640, size 0x70, virtual false, abstract: false, final false
inline void TffLqHUFrejnNAtavbmvIJWMDxsP() ;

constexpr ::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG* const& __cordl_internal_get_FblKlmdxaXSHZlCGGjSTzKaTaCBHA() const;

constexpr ::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*& __cordl_internal_get_FblKlmdxaXSHZlCGGjSTzKaTaCBHA() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_SlQpMdLJIQHZXRNLCGrVTgkolyXi() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_SlQpMdLJIQHZXRNLCGrVTgkolyXi() ;

constexpr int32_t const& __cordl_internal_get_ToLHCNEXsVCKOiGjDdxYAqmAjaKS() const;

constexpr int32_t& __cordl_internal_get_ToLHCNEXsVCKOiGjDdxYAqmAjaKS() ;

constexpr ::ArrayW<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*> const& __cordl_internal_get_ZnfPQPRprdTHMKPwJKwOVHljosor() const;

constexpr ::ArrayW<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*>& __cordl_internal_get_ZnfPQPRprdTHMKPwJKwOVHljosor() ;

constexpr int32_t const& __cordl_internal_get_hZmHHnYvGvpniuvItYvugzUtmEhK() const;

constexpr int32_t& __cordl_internal_get_hZmHHnYvGvpniuvItYvugzUtmEhK() ;

constexpr int32_t const& __cordl_internal_get_yfwXwslaHsunPnCzypFrGpzoajBj() const;

constexpr int32_t& __cordl_internal_get_yfwXwslaHsunPnCzypFrGpzoajBj() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*>* const& __cordl_internal_get_ywxDdYjClxCHaNaLdMEEdfyOZUlI() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*>*& __cordl_internal_get_ywxDdYjClxCHaNaLdMEEdfyOZUlI() ;

constexpr void __cordl_internal_set_FblKlmdxaXSHZlCGGjSTzKaTaCBHA(::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*  value) ;

constexpr void __cordl_internal_set_SlQpMdLJIQHZXRNLCGrVTgkolyXi(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_ToLHCNEXsVCKOiGjDdxYAqmAjaKS(int32_t  value) ;

constexpr void __cordl_internal_set_ZnfPQPRprdTHMKPwJKwOVHljosor(::ArrayW<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*>  value) ;

constexpr void __cordl_internal_set_hZmHHnYvGvpniuvItYvugzUtmEhK(int32_t  value) ;

constexpr void __cordl_internal_set_yfwXwslaHsunPnCzypFrGpzoajBj(int32_t  value) ;

constexpr void __cordl_internal_set_ywxDdYjClxCHaNaLdMEEdfyOZUlI(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*>*  value) ;

/// @brief Method .ctor, addr 0x18185e6b0, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method jynpgtmEaUVjcHHivATJhFvGHPJE, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*>* jynpgtmEaUVjcHHivATJhFvGHPJE() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA(Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA(Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1814};

/// @brief Field ToLHCNEXsVCKOiGjDdxYAqmAjaKS, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ToLHCNEXsVCKOiGjDdxYAqmAjaKS;

/// @brief Field SlQpMdLJIQHZXRNLCGrVTgkolyXi, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___SlQpMdLJIQHZXRNLCGrVTgkolyXi;

/// @brief Field ZnfPQPRprdTHMKPwJKwOVHljosor, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*>  ___ZnfPQPRprdTHMKPwJKwOVHljosor;

/// @brief Field FblKlmdxaXSHZlCGGjSTzKaTaCBHA, offset: 0x28, size: 0x8, def value: None
 ::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*  ___FblKlmdxaXSHZlCGGjSTzKaTaCBHA;

/// @brief Field hZmHHnYvGvpniuvItYvugzUtmEhK, offset: 0x30, size: 0x4, def value: None
 int32_t  ___hZmHHnYvGvpniuvItYvugzUtmEhK;

/// @brief Field yfwXwslaHsunPnCzypFrGpzoajBj, offset: 0x34, size: 0x4, def value: None
 int32_t  ___yfwXwslaHsunPnCzypFrGpzoajBj;

/// @brief Field ywxDdYjClxCHaNaLdMEEdfyOZUlI, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG*>*  ___ywxDdYjClxCHaNaLdMEEdfyOZUlI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA, ___ToLHCNEXsVCKOiGjDdxYAqmAjaKS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA, ___SlQpMdLJIQHZXRNLCGrVTgkolyXi) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA, ___ZnfPQPRprdTHMKPwJKwOVHljosor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA, ___FblKlmdxaXSHZlCGGjSTzKaTaCBHA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA, ___hZmHHnYvGvpniuvItYvugzUtmEhK) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA, ___yfwXwslaHsunPnCzypFrGpzoajBj) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA, ___ywxDdYjClxCHaNaLdMEEdfyOZUlI) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA) == 0x40, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerElementType, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Element
class CORDL_TYPE Controller_Element : public ::System::Object {
public:
// Declarations
using kfNwihGjmEjMLeDKdWYkfxjklQFVA = ::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA;

/// @brief Field CUfodCTqHFcGyhampNhGmAlFKEhOA, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_CUfodCTqHFcGyhampNhGmAlFKEhOA, put=__cordl_internal_set_CUfodCTqHFcGyhampNhGmAlFKEhOA)) ::Rewired::Controller_CompoundElement*  CUfodCTqHFcGyhampNhGmAlFKEhOA;

/// @brief Field KgAnRNqJUXqjagOUNYminluGrsiy, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_KgAnRNqJUXqjagOUNYminluGrsiy, put=__cordl_internal_set_KgAnRNqJUXqjagOUNYminluGrsiy)) ::Rewired::Controller*  KgAnRNqJUXqjagOUNYminluGrsiy;

 __declspec(property(get=get_compoundElement)) ::Rewired::Controller_CompoundElement*  compoundElement;

 __declspec(property(get=get_elementIdentifier)) ::Rewired::ControllerElementIdentifier*  elementIdentifier;

 __declspec(property(get=get_excludeFromPolling, put=set_excludeFromPolling)) bool  excludeFromPolling;

/// @brief Field gZoRGNpszOBpcXThJGDvfEMiCsAz, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gZoRGNpszOBpcXThJGDvfEMiCsAz, put=__cordl_internal_set_gZoRGNpszOBpcXThJGDvfEMiCsAz)) ::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA*  gZoRGNpszOBpcXThJGDvfEMiCsAz;

/// @brief Field iBAFsPPnBpEJCHNZFRUIldzWCRSbA, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_iBAFsPPnBpEJCHNZFRUIldzWCRSbA, put=__cordl_internal_set_iBAFsPPnBpEJCHNZFRUIldzWCRSbA)) bool  iBAFsPPnBpEJCHNZFRUIldzWCRSbA;

/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

 __declspec(property(get=get_isMemberElement)) bool  isMemberElement;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field rYSHswdqNJBycTTcKYCJjllcqKPJ, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_rYSHswdqNJBycTTcKYCJjllcqKPJ, put=__cordl_internal_set_rYSHswdqNJBycTTcKYCJjllcqKPJ)) int32_t  rYSHswdqNJBycTTcKYCJjllcqKPJ;

/// @brief Field type, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::Rewired::ControllerElementType  type;

/// @brief Field yFcxDYKijHBqCrEtSZsJjoLAkOKQ, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_yFcxDYKijHBqCrEtSZsJjoLAkOKQ, put=__cordl_internal_set_yFcxDYKijHBqCrEtSZsJjoLAkOKQ)) int32_t  yFcxDYKijHBqCrEtSZsJjoLAkOKQ;

static inline ::Rewired::Controller_Element* New_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method Reset, addr 0x1818586c0, size 0xc0, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::Rewired::Controller_CompoundElement* const& __cordl_internal_get_CUfodCTqHFcGyhampNhGmAlFKEhOA() const;

constexpr ::Rewired::Controller_CompoundElement*& __cordl_internal_get_CUfodCTqHFcGyhampNhGmAlFKEhOA() ;

constexpr ::Rewired::Controller* const& __cordl_internal_get_KgAnRNqJUXqjagOUNYminluGrsiy() const;

constexpr ::Rewired::Controller*& __cordl_internal_get_KgAnRNqJUXqjagOUNYminluGrsiy() ;

constexpr ::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA* const& __cordl_internal_get_gZoRGNpszOBpcXThJGDvfEMiCsAz() const;

constexpr ::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA*& __cordl_internal_get_gZoRGNpszOBpcXThJGDvfEMiCsAz() ;

constexpr bool const& __cordl_internal_get_iBAFsPPnBpEJCHNZFRUIldzWCRSbA() const;

constexpr bool& __cordl_internal_get_iBAFsPPnBpEJCHNZFRUIldzWCRSbA() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr int32_t const& __cordl_internal_get_rYSHswdqNJBycTTcKYCJjllcqKPJ() const;

constexpr int32_t& __cordl_internal_get_rYSHswdqNJBycTTcKYCJjllcqKPJ() ;

constexpr ::Rewired::ControllerElementType const& __cordl_internal_get_type() const;

constexpr ::Rewired::ControllerElementType& __cordl_internal_get_type() ;

constexpr int32_t const& __cordl_internal_get_yFcxDYKijHBqCrEtSZsJjoLAkOKQ() const;

constexpr int32_t& __cordl_internal_get_yFcxDYKijHBqCrEtSZsJjoLAkOKQ() ;

constexpr void __cordl_internal_set_CUfodCTqHFcGyhampNhGmAlFKEhOA(::Rewired::Controller_CompoundElement*  value) ;

constexpr void __cordl_internal_set_KgAnRNqJUXqjagOUNYminluGrsiy(::Rewired::Controller*  value) ;

constexpr void __cordl_internal_set_gZoRGNpszOBpcXThJGDvfEMiCsAz(::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA*  value) ;

constexpr void __cordl_internal_set_iBAFsPPnBpEJCHNZFRUIldzWCRSbA(bool  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_rYSHswdqNJBycTTcKYCJjllcqKPJ(int32_t  value) ;

constexpr void __cordl_internal_set_type(::Rewired::ControllerElementType  value) ;

constexpr void __cordl_internal_set_yFcxDYKijHBqCrEtSZsJjoLAkOKQ(int32_t  value) ;

/// @brief Method .ctor, addr 0x181858780, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_compoundElement, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Controller_CompoundElement* get_compoundElement() ;

/// @brief Method get_elementIdentifier, addr 0x181858820, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* get_elementIdentifier() ;

/// @brief Method get_excludeFromPolling, addr 0x1818588a0, size 0x60, virtual true, abstract: false, final false
inline bool get_excludeFromPolling() ;

/// @brief Method get_isMemberElement, addr 0x181858900, size 0x60, virtual false, abstract: false, final false
inline bool get_isMemberElement() ;

/// @brief Method lqOvifGCxYtdFkkbCfBgBBTmspBT, addr 0x181858960, size 0x50, virtual false, abstract: false, final false
inline void lqOvifGCxYtdFkkbCfBgBBTmspBT(::Rewired::Controller_CompoundElement*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qfxaaRWPwSWxSBDpiLaRQMsxppYF, addr 0x1818589b0, size 0x50, virtual false, abstract: false, final false
inline void qfxaaRWPwSWxSBDpiLaRQMsxppYF(::Rewired::Controller_CompoundElement*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_excludeFromPolling, addr 0x181858a00, size 0x70, virtual true, abstract: false, final false
inline void set_excludeFromPolling(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller_Element() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller_Element", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller_Element(Controller_Element && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller_Element", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller_Element(Controller_Element const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1815};

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field type, offset: 0x20, size: 0x4, def value: None
 ::Rewired::ControllerElementType  ___type;

/// @brief Field gZoRGNpszOBpcXThJGDvfEMiCsAz, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA*  ___gZoRGNpszOBpcXThJGDvfEMiCsAz;

/// @brief Field yFcxDYKijHBqCrEtSZsJjoLAkOKQ, offset: 0x30, size: 0x4, def value: None
 int32_t  ___yFcxDYKijHBqCrEtSZsJjoLAkOKQ;

/// @brief Field KgAnRNqJUXqjagOUNYminluGrsiy, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Controller*  ___KgAnRNqJUXqjagOUNYminluGrsiy;

/// @brief Field rYSHswdqNJBycTTcKYCJjllcqKPJ, offset: 0x40, size: 0x4, def value: None
 int32_t  ___rYSHswdqNJBycTTcKYCJjllcqKPJ;

/// @brief Field CUfodCTqHFcGyhampNhGmAlFKEhOA, offset: 0x48, size: 0x8, def value: None
 ::Rewired::Controller_CompoundElement*  ___CUfodCTqHFcGyhampNhGmAlFKEhOA;

/// @brief Field iBAFsPPnBpEJCHNZFRUIldzWCRSbA, offset: 0x50, size: 0x1, def value: None
 bool  ___iBAFsPPnBpEJCHNZFRUIldzWCRSbA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Controller_Element, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Element, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Element, ___type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Element, ___gZoRGNpszOBpcXThJGDvfEMiCsAz) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Element, ___yFcxDYKijHBqCrEtSZsJjoLAkOKQ) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Element, ___KgAnRNqJUXqjagOUNYminluGrsiy) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Element, ___rYSHswdqNJBycTTcKYCJjllcqKPJ) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Element, ___CUfodCTqHFcGyhampNhGmAlFKEhOA) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Element, ___iBAFsPPnBpEJCHNZFRUIldzWCRSbA) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Rewired::Controller_Element) == 0x58, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::Element::kfNwihGjmEjMLeDKdWYkfxjklQFVA::tCWrtXjiRvoOCcFDpNPkTuFWOLAG
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Axis/xyXVloKjjCbkNjVbRoiXjyXBKasBc/qQZdqCGVbkfaMgCxWUpkDGzqrnagb
class CORDL_TYPE xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb : public ::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG {
public:
// Declarations
/// @brief Field IIXfNJKnILHmEnlcDFhdeuPwSowfb, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_IIXfNJKnILHmEnlcDFhdeuPwSowfb, put=__cordl_internal_set_IIXfNJKnILHmEnlcDFhdeuPwSowfb)) float_t  IIXfNJKnILHmEnlcDFhdeuPwSowfb;

/// @brief Field MBZOMwMwqTWUkrihYfzIDJDgPgat, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MBZOMwMwqTWUkrihYfzIDJDgPgat, put=__cordl_internal_set_MBZOMwMwqTWUkrihYfzIDJDgPgat)) double_t  MBZOMwMwqTWUkrihYfzIDJDgPgat;

 __declspec(property(get=olFBWWHePhSYySrbaTbITZOBPjbtA)) double_t  PrSjImJqYDBVjBmDIrVLxcZcOoqjA;

/// @brief Field QXIRWdIgGQEntosJtvdDwQXqLoFy, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_QXIRWdIgGQEntosJtvdDwQXqLoFy, put=__cordl_internal_set_QXIRWdIgGQEntosJtvdDwQXqLoFy)) float_t  QXIRWdIgGQEntosJtvdDwQXqLoFy;

/// @brief Field RvtqwBabTgzVONAOSdhWbyAtKktJ, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_RvtqwBabTgzVONAOSdhWbyAtKktJ, put=__cordl_internal_set_RvtqwBabTgzVONAOSdhWbyAtKktJ)) float_t  RvtqwBabTgzVONAOSdhWbyAtKktJ;

/// @brief Field TmSgSRnmhjaQAJsuwcubHvAjlsOBb, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_TmSgSRnmhjaQAJsuwcubHvAjlsOBb, put=__cordl_internal_set_TmSgSRnmhjaQAJsuwcubHvAjlsOBb)) double_t  TmSgSRnmhjaQAJsuwcubHvAjlsOBb;

/// @brief Field TrPEbbQhUTGthfEdCNjzTuRMXRyY, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrPEbbQhUTGthfEdCNjzTuRMXRyY, put=__cordl_internal_set_TrPEbbQhUTGthfEdCNjzTuRMXRyY)) double_t  TrPEbbQhUTGthfEdCNjzTuRMXRyY;

 __declspec(property(get=EVHxWffxRJrFegVXDsqGFwzkiKYB)) double_t  XfPUmWYSODGRxdBSfdnekInJDkbp;

 __declspec(property(get=mBtddPIFrlgKDMgOMkPfqzsJxFgg)) double_t  YWETAcnROgpPPHKLHBxIzTCegCne;

/// @brief Field cvrVzxxEnedbsPFciSPquoiWePXU, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_cvrVzxxEnedbsPFciSPquoiWePXU, put=__cordl_internal_set_cvrVzxxEnedbsPFciSPquoiWePXU)) float_t  cvrVzxxEnedbsPFciSPquoiWePXU;

/// @brief Field fKccpYkYAOHZGaWTycUSeAmFplplB, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_fKccpYkYAOHZGaWTycUSeAmFplplB, put=__cordl_internal_set_fKccpYkYAOHZGaWTycUSeAmFplplB)) float_t  fKccpYkYAOHZGaWTycUSeAmFplplB;

/// @brief Field oIonIACKtgnPZoeohIFFTdqfEXjP, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_oIonIACKtgnPZoeohIFFTdqfEXjP, put=__cordl_internal_set_oIonIACKtgnPZoeohIFFTdqfEXjP)) float_t  oIonIACKtgnPZoeohIFFTdqfEXjP;

/// @brief Field qOygKPqBdAfuvaVSwAAMbhQKKNUKc, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_qOygKPqBdAfuvaVSwAAMbhQKKNUKc, put=__cordl_internal_set_qOygKPqBdAfuvaVSwAAMbhQKKNUKc)) double_t  qOygKPqBdAfuvaVSwAAMbhQKKNUKc;

/// @brief Field ugEIImlQsTPsuglSXuVGPggWlvxJ, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ugEIImlQsTPsuglSXuVGPggWlvxJ, put=__cordl_internal_set_ugEIImlQsTPsuglSXuVGPggWlvxJ)) double_t  ugEIImlQsTPsuglSXuVGPggWlvxJ;

 __declspec(property(get=yMMPTjcmCxyAUMwDVakSciDJqSKB)) double_t  vsZZFgkVNVpsDYFfXpbKkEhkPThx;

/// @brief Field zTIKGQaqWJLEuYkqWNUKSMGmwvyo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_zTIKGQaqWJLEuYkqWNUKSMGmwvyo, put=__cordl_internal_set_zTIKGQaqWJLEuYkqWNUKSMGmwvyo)) double_t  zTIKGQaqWJLEuYkqWNUKSMGmwvyo;

/// @brief Method EVHxWffxRJrFegVXDsqGFwzkiKYB, addr 0x18185e850, size 0x60, virtual false, abstract: false, final false
inline double_t EVHxWffxRJrFegVXDsqGFwzkiKYB() ;

static inline ::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb* New_ctor() ;

/// @brief Method VNUrduIgtuLPfHodISZTQUrVsFMy, addr 0x18185e8b0, size 0x140, virtual false, abstract: false, final false
inline void VNUrduIgtuLPfHodISZTQUrVsFMy(bool  _cordl_fixed_empty_name_whitespace) ;

constexpr float_t const& __cordl_internal_get_IIXfNJKnILHmEnlcDFhdeuPwSowfb() const;

constexpr float_t& __cordl_internal_get_IIXfNJKnILHmEnlcDFhdeuPwSowfb() ;

constexpr double_t const& __cordl_internal_get_MBZOMwMwqTWUkrihYfzIDJDgPgat() const;

constexpr double_t& __cordl_internal_get_MBZOMwMwqTWUkrihYfzIDJDgPgat() ;

constexpr float_t const& __cordl_internal_get_QXIRWdIgGQEntosJtvdDwQXqLoFy() const;

constexpr float_t& __cordl_internal_get_QXIRWdIgGQEntosJtvdDwQXqLoFy() ;

constexpr float_t const& __cordl_internal_get_RvtqwBabTgzVONAOSdhWbyAtKktJ() const;

constexpr float_t& __cordl_internal_get_RvtqwBabTgzVONAOSdhWbyAtKktJ() ;

constexpr double_t const& __cordl_internal_get_TmSgSRnmhjaQAJsuwcubHvAjlsOBb() const;

constexpr double_t& __cordl_internal_get_TmSgSRnmhjaQAJsuwcubHvAjlsOBb() ;

constexpr double_t const& __cordl_internal_get_TrPEbbQhUTGthfEdCNjzTuRMXRyY() const;

constexpr double_t& __cordl_internal_get_TrPEbbQhUTGthfEdCNjzTuRMXRyY() ;

constexpr float_t const& __cordl_internal_get_cvrVzxxEnedbsPFciSPquoiWePXU() const;

constexpr float_t& __cordl_internal_get_cvrVzxxEnedbsPFciSPquoiWePXU() ;

constexpr float_t const& __cordl_internal_get_fKccpYkYAOHZGaWTycUSeAmFplplB() const;

constexpr float_t& __cordl_internal_get_fKccpYkYAOHZGaWTycUSeAmFplplB() ;

constexpr float_t const& __cordl_internal_get_oIonIACKtgnPZoeohIFFTdqfEXjP() const;

constexpr float_t& __cordl_internal_get_oIonIACKtgnPZoeohIFFTdqfEXjP() ;

constexpr double_t const& __cordl_internal_get_qOygKPqBdAfuvaVSwAAMbhQKKNUKc() const;

constexpr double_t& __cordl_internal_get_qOygKPqBdAfuvaVSwAAMbhQKKNUKc() ;

constexpr double_t const& __cordl_internal_get_ugEIImlQsTPsuglSXuVGPggWlvxJ() const;

constexpr double_t& __cordl_internal_get_ugEIImlQsTPsuglSXuVGPggWlvxJ() ;

constexpr double_t const& __cordl_internal_get_zTIKGQaqWJLEuYkqWNUKSMGmwvyo() const;

constexpr double_t& __cordl_internal_get_zTIKGQaqWJLEuYkqWNUKSMGmwvyo() ;

constexpr void __cordl_internal_set_IIXfNJKnILHmEnlcDFhdeuPwSowfb(float_t  value) ;

constexpr void __cordl_internal_set_MBZOMwMwqTWUkrihYfzIDJDgPgat(double_t  value) ;

constexpr void __cordl_internal_set_QXIRWdIgGQEntosJtvdDwQXqLoFy(float_t  value) ;

constexpr void __cordl_internal_set_RvtqwBabTgzVONAOSdhWbyAtKktJ(float_t  value) ;

constexpr void __cordl_internal_set_TmSgSRnmhjaQAJsuwcubHvAjlsOBb(double_t  value) ;

constexpr void __cordl_internal_set_TrPEbbQhUTGthfEdCNjzTuRMXRyY(double_t  value) ;

constexpr void __cordl_internal_set_cvrVzxxEnedbsPFciSPquoiWePXU(float_t  value) ;

constexpr void __cordl_internal_set_fKccpYkYAOHZGaWTycUSeAmFplplB(float_t  value) ;

constexpr void __cordl_internal_set_oIonIACKtgnPZoeohIFFTdqfEXjP(float_t  value) ;

constexpr void __cordl_internal_set_qOygKPqBdAfuvaVSwAAMbhQKKNUKc(double_t  value) ;

constexpr void __cordl_internal_set_ugEIImlQsTPsuglSXuVGPggWlvxJ(double_t  value) ;

constexpr void __cordl_internal_set_zTIKGQaqWJLEuYkqWNUKSMGmwvyo(double_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method jRMvDpPHzJCpSprhzyUbIzvrpzBe, addr 0x18185e9f0, size 0x30, virtual false, abstract: false, final false
inline void jRMvDpPHzJCpSprhzyUbIzvrpzBe(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method kkWQVmtbuIQJOVTxTCUTkLMSNuFd, addr 0x18185ea20, size 0x30, virtual true, abstract: false, final false
inline void kkWQVmtbuIQJOVTxTCUTkLMSNuFd() ;

/// @brief Method mBtddPIFrlgKDMgOMkPfqzsJxFgg, addr 0x18185ea50, size 0x60, virtual false, abstract: false, final false
inline double_t mBtddPIFrlgKDMgOMkPfqzsJxFgg() ;

/// @brief Method olFBWWHePhSYySrbaTbITZOBPjbtA, addr 0x18185eab0, size 0x60, virtual false, abstract: false, final false
inline double_t olFBWWHePhSYySrbaTbITZOBPjbtA() ;

/// @brief Method yMMPTjcmCxyAUMwDVakSciDJqSKB, addr 0x18185eb10, size 0x60, virtual false, abstract: false, final false
inline double_t yMMPTjcmCxyAUMwDVakSciDJqSKB() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb(xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb(xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1816};

/// @brief Field skWIZmaauhNGdyTFgwZJNALhFcij offset 0xffffffff size 0x4
static constexpr float_t  skWIZmaauhNGdyTFgwZJNALhFcij{static_cast<float_t>(0.001f)};

/// @brief Field cvrVzxxEnedbsPFciSPquoiWePXU, offset: 0x10, size: 0x4, def value: None
 float_t  ___cvrVzxxEnedbsPFciSPquoiWePXU;

/// @brief Field IIXfNJKnILHmEnlcDFhdeuPwSowfb, offset: 0x14, size: 0x4, def value: None
 float_t  ___IIXfNJKnILHmEnlcDFhdeuPwSowfb;

/// @brief Field fKccpYkYAOHZGaWTycUSeAmFplplB, offset: 0x18, size: 0x4, def value: None
 float_t  ___fKccpYkYAOHZGaWTycUSeAmFplplB;

/// @brief Field QXIRWdIgGQEntosJtvdDwQXqLoFy, offset: 0x1c, size: 0x4, def value: None
 float_t  ___QXIRWdIgGQEntosJtvdDwQXqLoFy;

/// @brief Field RvtqwBabTgzVONAOSdhWbyAtKktJ, offset: 0x20, size: 0x4, def value: None
 float_t  ___RvtqwBabTgzVONAOSdhWbyAtKktJ;

/// @brief Field oIonIACKtgnPZoeohIFFTdqfEXjP, offset: 0x24, size: 0x4, def value: None
 float_t  ___oIonIACKtgnPZoeohIFFTdqfEXjP;

/// @brief Field MBZOMwMwqTWUkrihYfzIDJDgPgat, offset: 0x28, size: 0x8, def value: None
 double_t  ___MBZOMwMwqTWUkrihYfzIDJDgPgat;

/// @brief Field qOygKPqBdAfuvaVSwAAMbhQKKNUKc, offset: 0x30, size: 0x8, def value: None
 double_t  ___qOygKPqBdAfuvaVSwAAMbhQKKNUKc;

/// @brief Field zTIKGQaqWJLEuYkqWNUKSMGmwvyo, offset: 0x38, size: 0x8, def value: None
 double_t  ___zTIKGQaqWJLEuYkqWNUKSMGmwvyo;

/// @brief Field TmSgSRnmhjaQAJsuwcubHvAjlsOBb, offset: 0x40, size: 0x8, def value: None
 double_t  ___TmSgSRnmhjaQAJsuwcubHvAjlsOBb;

/// @brief Field TrPEbbQhUTGthfEdCNjzTuRMXRyY, offset: 0x48, size: 0x8, def value: None
 double_t  ___TrPEbbQhUTGthfEdCNjzTuRMXRyY;

/// @brief Field ugEIImlQsTPsuglSXuVGPggWlvxJ, offset: 0x50, size: 0x8, def value: None
 double_t  ___ugEIImlQsTPsuglSXuVGPggWlvxJ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___cvrVzxxEnedbsPFciSPquoiWePXU) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___IIXfNJKnILHmEnlcDFhdeuPwSowfb) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___fKccpYkYAOHZGaWTycUSeAmFplplB) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___QXIRWdIgGQEntosJtvdDwQXqLoFy) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___RvtqwBabTgzVONAOSdhWbyAtKktJ) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___oIonIACKtgnPZoeohIFFTdqfEXjP) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___MBZOMwMwqTWUkrihYfzIDJDgPgat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___qOygKPqBdAfuvaVSwAAMbhQKKNUKc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___zTIKGQaqWJLEuYkqWNUKSMGmwvyo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___TmSgSRnmhjaQAJsuwcubHvAjlsOBb) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___TrPEbbQhUTGthfEdCNjzTuRMXRyY) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb, ___ugEIImlQsTPsuglSXuVGPggWlvxJ) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb) == 0x58, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::Element::kfNwihGjmEjMLeDKdWYkfxjklQFVA
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Axis/xyXVloKjjCbkNjVbRoiXjyXBKasBc
class CORDL_TYPE Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc : public ::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA {
public:
// Declarations
using qQZdqCGVbkfaMgCxWUpkDGzqrnagb = ::Rewired::xyXVloKjjCbkNjVbRoiXjyXBKasBc_Axis_Controller_qQZdqCGVbkfaMgCxWUpkDGzqrnagb;

static inline ::Rewired::Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc* New_ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x18185eb70, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc(Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc(Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1817};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc) == 0x40, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.AxisRange, Rewired.Controller::Element
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Axis
class CORDL_TYPE Controller_Axis : public ::Rewired::Controller_Element {
public:
// Declarations
using xyXVloKjjCbkNjVbRoiXjyXBKasBc = ::Rewired::Axis_Controller_xyXVloKjjCbkNjVbRoiXjyXBKasBc;

 __declspec(property(get=xsMuEsJttcEQDdTPMAtvelxqYkDG)) float_t  CItFcMkxdZffnjsTXhgtoxoatjpV;

 __declspec(property(get=IQMgAsfrczSJYwFXehbbbFcvfaRv)) float_t  QrBiPWaWJTJJCCpQqcrLAqyQicZXA;

 __declspec(property(get=sgASLKiTjTLxLfHeOaFHqUqBjVnd)) float_t  XzXZlVxGKeMBHpdDaIuUdWYKoNVsA;

 __declspec(property(get=get_axisCoordinateMode)) ::Rewired::AxisCoordinateMode  axisCoordinateMode;

 __declspec(property(get=get_excludeFromPolling, put=set_excludeFromPolling)) bool  excludeFromPolling;

/// @brief Field ktyDOxWUscgMsEPcQdealWgJFIzM, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ktyDOxWUscgMsEPcQdealWgJFIzM, put=__cordl_internal_set_ktyDOxWUscgMsEPcQdealWgJFIzM)) ::Rewired::Data::Mapping::HardwareAxisInfo*  ktyDOxWUscgMsEPcQdealWgJFIzM;

 __declspec(property(get=get_lastTimeActive)) double_t  lastTimeActive;

 __declspec(property(get=get_lastTimeActiveRaw)) double_t  lastTimeActiveRaw;

 __declspec(property(get=get_lastTimeInactive)) double_t  lastTimeInactive;

 __declspec(property(get=get_lastTimeInactiveRaw)) double_t  lastTimeInactiveRaw;

 __declspec(property(get=get_lastTimeValueChanged)) double_t  lastTimeValueChanged;

 __declspec(property(get=get_lastTimeValueChangedRaw)) double_t  lastTimeValueChangedRaw;

 __declspec(property(get=get_pollingDeadZone, put=set_pollingDeadZone)) float_t  pollingDeadZone;

/// @brief Field riFbsNCkEgIgOnhZXagMrUQNScDI, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_riFbsNCkEgIgOnhZXagMrUQNScDI, put=__cordl_internal_set_riFbsNCkEgIgOnhZXagMrUQNScDI)) ::Rewired::AxisRange  riFbsNCkEgIgOnhZXagMrUQNScDI;

 __declspec(property(get=get_timeActive)) double_t  timeActive;

 __declspec(property(get=get_timeActiveRaw)) double_t  timeActiveRaw;

 __declspec(property(get=get_timeInactive)) double_t  timeInactive;

 __declspec(property(get=get_timeInactiveRaw)) double_t  timeInactiveRaw;

 __declspec(property(get=get_value)) float_t  value;

 __declspec(property(get=get_valueDelta)) float_t  valueDelta;

 __declspec(property(get=get_valueDeltaRaw)) float_t  valueDeltaRaw;

 __declspec(property(get=get_valuePrev)) float_t  valuePrev;

 __declspec(property(get=get_valueRaw, put=dwGNMncKCTkRGwjincOPgpQCUHUv)) float_t  valueRaw;

 __declspec(property(get=get_valueRawPrev)) float_t  valueRawPrev;

/// @brief Method BdvIfQDrlxRsuuYiancQguPtOBvl, addr 0x18184a360, size 0x70, virtual false, abstract: false, final false
inline void BdvIfQDrlxRsuuYiancQguPtOBvl(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method IQMgAsfrczSJYwFXehbbbFcvfaRv, addr 0x18184a3d0, size 0x90, virtual false, abstract: false, final false
inline float_t IQMgAsfrczSJYwFXehbbbFcvfaRv() ;

/// @brief Method JRKjThhApUsRkhXxnCPFqfyTAKLU, addr 0x18184a460, size 0x70, virtual false, abstract: false, final false
inline void JRKjThhApUsRkhXxnCPFqfyTAKLU() ;

/// @brief Method JkvHmLmPWAavFnfwcFuTocMWxTRm, addr 0x18184a4d0, size 0x210, virtual false, abstract: false, final false
inline void JkvHmLmPWAavFnfwcFuTocMWxTRm(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method JsEuoKZWbgZzSgjJzfeuXQVZUGeE, addr 0x18184a6e0, size 0x70, virtual false, abstract: false, final false
inline void JsEuoKZWbgZzSgjJzfeuXQVZUGeE() ;

static inline ::Rewired::Controller_Axis* New_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::Data::Mapping::HardwareAxisInfo*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method OQsvbQDKjREcGZvnGPKnffDvhbNfA, addr 0x18184a750, size 0xb0, virtual false, abstract: false, final false
inline void OQsvbQDKjREcGZvnGPKnffDvhbNfA(::Rewired::AxisCalibration*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZftuGfRuwTSurNdOIDQUoqmjEwUd, addr 0x18184a800, size 0xe0, virtual false, abstract: false, final false
inline float_t ZftuGfRuwTSurNdOIDQUoqmjEwUd(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisCalibration*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::Rewired::Data::Mapping::HardwareAxisInfo* const& __cordl_internal_get_ktyDOxWUscgMsEPcQdealWgJFIzM() const;

constexpr ::Rewired::Data::Mapping::HardwareAxisInfo*& __cordl_internal_get_ktyDOxWUscgMsEPcQdealWgJFIzM() ;

constexpr ::Rewired::AxisRange const& __cordl_internal_get_riFbsNCkEgIgOnhZXagMrUQNScDI() const;

constexpr ::Rewired::AxisRange& __cordl_internal_get_riFbsNCkEgIgOnhZXagMrUQNScDI() ;

constexpr void __cordl_internal_set_ktyDOxWUscgMsEPcQdealWgJFIzM(::Rewired::Data::Mapping::HardwareAxisInfo*  value) ;

constexpr void __cordl_internal_set_riFbsNCkEgIgOnhZXagMrUQNScDI(::Rewired::AxisRange  value) ;

/// @brief Method .ctor, addr 0x18184a8e0, size 0x190, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::Data::Mapping::HardwareAxisInfo*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method dwGNMncKCTkRGwjincOPgpQCUHUv, addr 0x18184aa70, size 0xb0, virtual false, abstract: false, final false
inline void dwGNMncKCTkRGwjincOPgpQCUHUv(float_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_axisCoordinateMode, addr 0x18184ab20, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::AxisCoordinateMode get_axisCoordinateMode() ;

/// @brief Method get_excludeFromPolling, addr 0x18184ab80, size 0x90, virtual true, abstract: false, final false
inline bool get_excludeFromPolling() ;

/// @brief Method get_lastTimeActive, addr 0x18184acf0, size 0xe0, virtual false, abstract: false, final false
inline double_t get_lastTimeActive() ;

/// @brief Method get_lastTimeActiveRaw, addr 0x18184ac10, size 0xe0, virtual false, abstract: false, final false
inline double_t get_lastTimeActiveRaw() ;

/// @brief Method get_lastTimeInactive, addr 0x18184aeb0, size 0xe0, virtual false, abstract: false, final false
inline double_t get_lastTimeInactive() ;

/// @brief Method get_lastTimeInactiveRaw, addr 0x18184add0, size 0xe0, virtual false, abstract: false, final false
inline double_t get_lastTimeInactiveRaw() ;

/// @brief Method get_lastTimeValueChanged, addr 0x18184b070, size 0xe0, virtual false, abstract: false, final false
inline double_t get_lastTimeValueChanged() ;

/// @brief Method get_lastTimeValueChangedRaw, addr 0x18184af90, size 0xe0, virtual false, abstract: false, final false
inline double_t get_lastTimeValueChangedRaw() ;

/// @brief Method get_pollingDeadZone, addr 0x18184b150, size 0x70, virtual false, abstract: false, final false
inline float_t get_pollingDeadZone() ;

/// @brief Method get_timeActive, addr 0x18184b1c0, size 0x120, virtual false, abstract: false, final false
inline double_t get_timeActive() ;

/// @brief Method get_timeActiveRaw, addr 0x18184b1c0, size 0x120, virtual false, abstract: false, final false
inline double_t get_timeActiveRaw() ;

/// @brief Method get_timeInactive, addr 0x18184b400, size 0x120, virtual false, abstract: false, final false
inline double_t get_timeInactive() ;

/// @brief Method get_timeInactiveRaw, addr 0x18184b2e0, size 0x120, virtual false, abstract: false, final false
inline double_t get_timeInactiveRaw() ;

/// @brief Method get_value, addr 0x18184b9d0, size 0x180, virtual false, abstract: false, final false
inline float_t get_value() ;

/// @brief Method get_valueDelta, addr 0x18184b610, size 0x80, virtual false, abstract: false, final false
inline float_t get_valueDelta() ;

/// @brief Method get_valueDeltaRaw, addr 0x18184b520, size 0xf0, virtual false, abstract: false, final false
inline float_t get_valueDeltaRaw() ;

/// @brief Method get_valuePrev, addr 0x18184b690, size 0x180, virtual false, abstract: false, final false
inline float_t get_valuePrev() ;

/// @brief Method get_valueRaw, addr 0x18184b8f0, size 0xe0, virtual false, abstract: false, final false
inline float_t get_valueRaw() ;

/// @brief Method get_valueRawPrev, addr 0x18184b810, size 0xe0, virtual false, abstract: false, final false
inline float_t get_valueRawPrev() ;

/// @brief Method mFkIYEIxOuvLPkcBjRHTvMcvnbAW, addr 0x18184bb50, size 0x60, virtual false, abstract: false, final false
inline void mFkIYEIxOuvLPkcBjRHTvMcvnbAW(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method set_excludeFromPolling, addr 0x18184bbb0, size 0xa0, virtual true, abstract: false, final false
inline void set_excludeFromPolling(bool  value) ;

/// @brief Method set_pollingDeadZone, addr 0x18184bc50, size 0x90, virtual false, abstract: false, final false
inline void set_pollingDeadZone(float_t  value) ;

/// @brief Method sgASLKiTjTLxLfHeOaFHqUqBjVnd, addr 0x18184bce0, size 0x90, virtual false, abstract: false, final false
inline float_t sgASLKiTjTLxLfHeOaFHqUqBjVnd() ;

/// @brief Method wegPHneLHVQONhjYRqBPaPfXiBSN, addr 0x18184bd70, size 0xf0, virtual false, abstract: false, final false
inline void wegPHneLHVQONhjYRqBPaPfXiBSN() ;

/// @brief Method xsMuEsJttcEQDdTPMAtvelxqYkDG, addr 0x18184be60, size 0xd0, virtual false, abstract: false, final false
inline float_t xsMuEsJttcEQDdTPMAtvelxqYkDG() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller_Axis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller_Axis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller_Axis(Controller_Axis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller_Axis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller_Axis(Controller_Axis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1818};

/// @brief Field riFbsNCkEgIgOnhZXagMrUQNScDI, offset: 0x54, size: 0x4, def value: None
 ::Rewired::AxisRange  ___riFbsNCkEgIgOnhZXagMrUQNScDI;

/// @brief Field ktyDOxWUscgMsEPcQdealWgJFIzM, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Data::Mapping::HardwareAxisInfo*  ___ktyDOxWUscgMsEPcQdealWgJFIzM;

/// @brief Size padding 0x68 - 0x60 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Controller_Axis, ___riFbsNCkEgIgOnhZXagMrUQNScDI) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Axis, ___ktyDOxWUscgMsEPcQdealWgJFIzM) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Rewired::Controller_Axis) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::Element::kfNwihGjmEjMLeDKdWYkfxjklQFVA::tCWrtXjiRvoOCcFDpNPkTuFWOLAG
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Button/aVUAuemcxAoyqjzvzcgheaWHiSou/YNwdUTRvwsDcIWWhQYSAOvoGNayc
class CORDL_TYPE aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc : public ::Rewired::kfNwihGjmEjMLeDKdWYkfxjklQFVA_Element_Controller_tCWrtXjiRvoOCcFDpNPkTuFWOLAG {
public:
// Declarations
/// @brief Field VyEfovIRYXHvPWSsIRaFQNENUWnLA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_VyEfovIRYXHvPWSsIRaFQNENUWnLA, put=__cordl_internal_set_VyEfovIRYXHvPWSsIRaFQNENUWnLA)) ::Rewired::ButtonStateRecorder*  VyEfovIRYXHvPWSsIRaFQNENUWnLA;

/// @brief Field ixUEdNrHqLkrtpWttNvxSWnsyWmG, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ixUEdNrHqLkrtpWttNvxSWnsyWmG, put=__cordl_internal_set_ixUEdNrHqLkrtpWttNvxSWnsyWmG)) ::GlobalNamespace::vVuTuzUuxxOIXOMdnKGOVxGIoAOK*  ixUEdNrHqLkrtpWttNvxSWnsyWmG;

/// @brief Field ucYRsiYkWNmssweQjuWoFHDIrFIs, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_ucYRsiYkWNmssweQjuWoFHDIrFIs, put=__cordl_internal_set_ucYRsiYkWNmssweQjuWoFHDIrFIs)) bool  ucYRsiYkWNmssweQjuWoFHDIrFIs;

/// @brief Field ziEbExgUDIWBLmbnJOQiRAZefkGx, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ziEbExgUDIWBLmbnJOQiRAZefkGx, put=__cordl_internal_set_ziEbExgUDIWBLmbnJOQiRAZefkGx)) bool  ziEbExgUDIWBLmbnJOQiRAZefkGx;

static inline ::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc* New_ctor() ;

/// @brief Method OczjgQjcMTBufqZfcrVaAjZlBNUEA, addr 0x18185def0, size 0xe0, virtual false, abstract: false, final false
inline void OczjgQjcMTBufqZfcrVaAjZlBNUEA(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method XnBzOXhNJLtilQIjOnLmLlghnnHE, addr 0x18185dfd0, size 0x40, virtual true, abstract: false, final false
inline void XnBzOXhNJLtilQIjOnLmLlghnnHE() ;

constexpr ::Rewired::ButtonStateRecorder* const& __cordl_internal_get_VyEfovIRYXHvPWSsIRaFQNENUWnLA() const;

constexpr ::Rewired::ButtonStateRecorder*& __cordl_internal_get_VyEfovIRYXHvPWSsIRaFQNENUWnLA() ;

constexpr ::GlobalNamespace::vVuTuzUuxxOIXOMdnKGOVxGIoAOK* const& __cordl_internal_get_ixUEdNrHqLkrtpWttNvxSWnsyWmG() const;

constexpr ::GlobalNamespace::vVuTuzUuxxOIXOMdnKGOVxGIoAOK*& __cordl_internal_get_ixUEdNrHqLkrtpWttNvxSWnsyWmG() ;

constexpr bool const& __cordl_internal_get_ucYRsiYkWNmssweQjuWoFHDIrFIs() const;

constexpr bool& __cordl_internal_get_ucYRsiYkWNmssweQjuWoFHDIrFIs() ;

constexpr bool const& __cordl_internal_get_ziEbExgUDIWBLmbnJOQiRAZefkGx() const;

constexpr bool& __cordl_internal_get_ziEbExgUDIWBLmbnJOQiRAZefkGx() ;

constexpr void __cordl_internal_set_VyEfovIRYXHvPWSsIRaFQNENUWnLA(::Rewired::ButtonStateRecorder*  value) ;

constexpr void __cordl_internal_set_ixUEdNrHqLkrtpWttNvxSWnsyWmG(::GlobalNamespace::vVuTuzUuxxOIXOMdnKGOVxGIoAOK*  value) ;

constexpr void __cordl_internal_set_ucYRsiYkWNmssweQjuWoFHDIrFIs(bool  value) ;

constexpr void __cordl_internal_set_ziEbExgUDIWBLmbnJOQiRAZefkGx(bool  value) ;

/// @brief Method .ctor, addr 0x18185e010, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc(aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc(aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1819};

/// @brief Field ziEbExgUDIWBLmbnJOQiRAZefkGx, offset: 0x10, size: 0x1, def value: None
 bool  ___ziEbExgUDIWBLmbnJOQiRAZefkGx;

/// @brief Field ucYRsiYkWNmssweQjuWoFHDIrFIs, offset: 0x11, size: 0x1, def value: None
 bool  ___ucYRsiYkWNmssweQjuWoFHDIrFIs;

/// @brief Field VyEfovIRYXHvPWSsIRaFQNENUWnLA, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ButtonStateRecorder*  ___VyEfovIRYXHvPWSsIRaFQNENUWnLA;

/// @brief Field ixUEdNrHqLkrtpWttNvxSWnsyWmG, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::vVuTuzUuxxOIXOMdnKGOVxGIoAOK*  ___ixUEdNrHqLkrtpWttNvxSWnsyWmG;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc, ___ziEbExgUDIWBLmbnJOQiRAZefkGx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc, ___ucYRsiYkWNmssweQjuWoFHDIrFIs) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc, ___VyEfovIRYXHvPWSsIRaFQNENUWnLA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc, ___ixUEdNrHqLkrtpWttNvxSWnsyWmG) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc) == 0x28, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::Button::aVUAuemcxAoyqjzvzcgheaWHiSou::YNwdUTRvwsDcIWWhQYSAOvoGNayc
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Button/aVUAuemcxAoyqjzvzcgheaWHiSou/VnzudaVmZSnJZEdkbSxtNHnPGNzb
class CORDL_TYPE aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb : public ::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc {
public:
// Declarations
/// @brief Field TNiIZyCcKvhlRefjfAOgYZKTnceG, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_TNiIZyCcKvhlRefjfAOgYZKTnceG, put=__cordl_internal_set_TNiIZyCcKvhlRefjfAOgYZKTnceG)) float_t  TNiIZyCcKvhlRefjfAOgYZKTnceG;

/// @brief Field nELijsKWJsTeVJkoUCpFtdwSoDGwA, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nELijsKWJsTeVJkoUCpFtdwSoDGwA, put=__cordl_internal_set_nELijsKWJsTeVJkoUCpFtdwSoDGwA)) float_t  nELijsKWJsTeVJkoUCpFtdwSoDGwA;

/// @brief Method HsRjNKTFEdBfkarUwqcvGGyozfKfA, addr 0x18185de40, size 0x50, virtual false, abstract: false, final false
inline void HsRjNKTFEdBfkarUwqcvGGyozfKfA(float_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb* New_ctor() ;

/// @brief Method TmtzZyRLWgBsYICIobZeGBhrnCaUA, addr 0x18185de90, size 0x50, virtual true, abstract: false, final false
inline void TmtzZyRLWgBsYICIobZeGBhrnCaUA() ;

constexpr float_t const& __cordl_internal_get_TNiIZyCcKvhlRefjfAOgYZKTnceG() const;

constexpr float_t& __cordl_internal_get_TNiIZyCcKvhlRefjfAOgYZKTnceG() ;

constexpr float_t const& __cordl_internal_get_nELijsKWJsTeVJkoUCpFtdwSoDGwA() const;

constexpr float_t& __cordl_internal_get_nELijsKWJsTeVJkoUCpFtdwSoDGwA() ;

constexpr void __cordl_internal_set_TNiIZyCcKvhlRefjfAOgYZKTnceG(float_t  value) ;

constexpr void __cordl_internal_set_nELijsKWJsTeVJkoUCpFtdwSoDGwA(float_t  value) ;

/// @brief Method .ctor, addr 0x18185dee0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb(aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb(aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1820};

/// @brief Field TNiIZyCcKvhlRefjfAOgYZKTnceG, offset: 0x28, size: 0x4, def value: None
 float_t  ___TNiIZyCcKvhlRefjfAOgYZKTnceG;

/// @brief Field nELijsKWJsTeVJkoUCpFtdwSoDGwA, offset: 0x2c, size: 0x4, def value: None
 float_t  ___nELijsKWJsTeVJkoUCpFtdwSoDGwA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb, ___TNiIZyCcKvhlRefjfAOgYZKTnceG) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb, ___nELijsKWJsTeVJkoUCpFtdwSoDGwA) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb) == 0x30, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::Element::kfNwihGjmEjMLeDKdWYkfxjklQFVA
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Button/aVUAuemcxAoyqjzvzcgheaWHiSou
class CORDL_TYPE Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou : public ::Rewired::Element_Controller_kfNwihGjmEjMLeDKdWYkfxjklQFVA {
public:
// Declarations
using VnzudaVmZSnJZEdkbSxtNHnPGNzb = ::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_VnzudaVmZSnJZEdkbSxtNHnPGNzb;

using YNwdUTRvwsDcIWWhQYSAOvoGNayc = ::Rewired::aVUAuemcxAoyqjzvzcgheaWHiSou_Button_Controller_YNwdUTRvwsDcIWWhQYSAOvoGNayc;

/// @brief Method EmpGCtDDnOyUwFwURkxefBzmgzEAA, addr 0x18185e090, size 0xd0, virtual false, abstract: false, final false
inline void EmpGCtDDnOyUwFwURkxefBzmgzEAA(float_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou* New_ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18185e160, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method fPRARMDljiEcsyqPBNlkFVaAUBmLb, addr 0x18185e230, size 0xd0, virtual false, abstract: false, final false
inline void fPRARMDljiEcsyqPBNlkFVaAUBmLb() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou(Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou(Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1821};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou) == 0x40, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::Element
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Button
class CORDL_TYPE Controller_Button : public ::Rewired::Controller_Element {
public:
// Declarations
using aVUAuemcxAoyqjzvzcgheaWHiSou = ::Rewired::Button_Controller_aVUAuemcxAoyqjzvzcgheaWHiSou;

 __declspec(property(get=SKdgaQrvfZMZfvWuRXGYQxUMXWHB)) ::Rewired::ButtonStateFlags  QOzaUdhoPktuipgBsFBxRgpFpjpc;

 __declspec(property(get=get_doublePressedAndHeld)) bool  doublePressedAndHeld;

 __declspec(property(get=get_isPressureSensitive)) bool  isPressureSensitive;

 __declspec(property(get=get_justChangedState)) bool  justChangedState;

 __declspec(property(get=get_justDoublePressed)) bool  justDoublePressed;

 __declspec(property(get=get_justPressed)) bool  justPressed;

 __declspec(property(get=get_justReleased)) bool  justReleased;

 __declspec(property(get=get_lastTimePressed)) double_t  lastTimePressed;

 __declspec(property(get=get_lastTimeStateChanged)) double_t  lastTimeStateChanged;

 __declspec(property(get=get_lastTimeUnpressed)) double_t  lastTimeUnpressed;

/// @brief Field lbtDYtXcJUFDuErILgeWJXDpDfBuA, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_lbtDYtXcJUFDuErILgeWJXDpDfBuA, put=__cordl_internal_set_lbtDYtXcJUFDuErILgeWJXDpDfBuA)) bool  lbtDYtXcJUFDuErILgeWJXDpDfBuA;

 __declspec(property(get=get_pressure)) float_t  pressure;

 __declspec(property(get=get_pressurePrev)) float_t  pressurePrev;

 __declspec(property(get=get_timePressed)) double_t  timePressed;

 __declspec(property(get=get_timeUnpressed)) double_t  timeUnpressed;

/// @brief Field uHECxQVPxXBMAIBRHeZOPNMTnbEHA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_uHECxQVPxXBMAIBRHeZOPNMTnbEHA, put=__cordl_internal_set_uHECxQVPxXBMAIBRHeZOPNMTnbEHA)) ::Rewired::Data::Mapping::HardwareButtonInfo*  uHECxQVPxXBMAIBRHeZOPNMTnbEHA;

 __declspec(property(get=get_value)) bool  value;

 __declspec(property(get=get_valuePrev)) bool  valuePrev;

/// @brief Method DoublePressedAndHeld, addr 0x18184bf30, size 0x130, virtual false, abstract: false, final false
inline bool DoublePressedAndHeld(float_t  speed) ;

/// @brief Method FOGrzUxzViFqnYpaWxSLRiVnHfOs, addr 0x18184c060, size 0x240, virtual false, abstract: false, final false
inline void FOGrzUxzViFqnYpaWxSLRiVnHfOs() ;

/// @brief Method FZNLITtInQMWVXbOsxPqrZGdKXwV, addr 0x18184c2a0, size 0x220, virtual false, abstract: false, final false
inline void FZNLITtInQMWVXbOsxPqrZGdKXwV(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method JustDoublePressed, addr 0x18184c4c0, size 0x140, virtual false, abstract: false, final false
inline bool JustDoublePressed(float_t  speed) ;

static inline ::Rewired::Controller_Button* New_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Data::Mapping::HardwareButtonInfo*  _cordl_fixed_empty_name_whitespace_param_3) ;

static inline ::Rewired::Controller_Button* New_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::Data::Mapping::HardwareButtonInfo*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method SKdgaQrvfZMZfvWuRXGYQxUMXWHB, addr 0x18184c600, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::ButtonStateFlags SKdgaQrvfZMZfvWuRXGYQxUMXWHB() ;

constexpr bool const& __cordl_internal_get_lbtDYtXcJUFDuErILgeWJXDpDfBuA() const;

constexpr bool& __cordl_internal_get_lbtDYtXcJUFDuErILgeWJXDpDfBuA() ;

constexpr ::Rewired::Data::Mapping::HardwareButtonInfo* const& __cordl_internal_get_uHECxQVPxXBMAIBRHeZOPNMTnbEHA() const;

constexpr ::Rewired::Data::Mapping::HardwareButtonInfo*& __cordl_internal_get_uHECxQVPxXBMAIBRHeZOPNMTnbEHA() ;

constexpr void __cordl_internal_set_lbtDYtXcJUFDuErILgeWJXDpDfBuA(bool  value) ;

constexpr void __cordl_internal_set_uHECxQVPxXBMAIBRHeZOPNMTnbEHA(::Rewired::Data::Mapping::HardwareButtonInfo*  value) ;

/// @brief Method .ctor, addr 0x18184c680, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Data::Mapping::HardwareButtonInfo*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method .ctor, addr 0x18184c7d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::Data::Mapping::HardwareButtonInfo*  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method get_doublePressedAndHeld, addr 0x18184c8b0, size 0xb0, virtual false, abstract: false, final false
inline bool get_doublePressedAndHeld() ;

/// @brief Method get_isPressureSensitive, addr 0x18184c960, size 0x60, virtual false, abstract: false, final false
inline bool get_isPressureSensitive() ;

/// @brief Method get_justChangedState, addr 0x18184c9c0, size 0xf0, virtual false, abstract: false, final false
inline bool get_justChangedState() ;

/// @brief Method get_justDoublePressed, addr 0x18184cab0, size 0xc0, virtual false, abstract: false, final false
inline bool get_justDoublePressed() ;

/// @brief Method get_justPressed, addr 0x18184cb70, size 0xf0, virtual false, abstract: false, final false
inline bool get_justPressed() ;

/// @brief Method get_justReleased, addr 0x18184cc60, size 0xf0, virtual false, abstract: false, final false
inline bool get_justReleased() ;

/// @brief Method get_lastTimePressed, addr 0x18184cd50, size 0xb0, virtual false, abstract: false, final false
inline double_t get_lastTimePressed() ;

/// @brief Method get_lastTimeStateChanged, addr 0x18184ce00, size 0xb0, virtual false, abstract: false, final false
inline double_t get_lastTimeStateChanged() ;

/// @brief Method get_lastTimeUnpressed, addr 0x18184ceb0, size 0xb0, virtual false, abstract: false, final false
inline double_t get_lastTimeUnpressed() ;

/// @brief Method get_pressure, addr 0x18184d0a0, size 0x140, virtual false, abstract: false, final false
inline float_t get_pressure() ;

/// @brief Method get_pressurePrev, addr 0x18184cf60, size 0x140, virtual false, abstract: false, final false
inline float_t get_pressurePrev() ;

/// @brief Method get_timePressed, addr 0x18184d1e0, size 0xb0, virtual false, abstract: false, final false
inline double_t get_timePressed() ;

/// @brief Method get_timeUnpressed, addr 0x18184d290, size 0xb0, virtual false, abstract: false, final false
inline double_t get_timeUnpressed() ;

/// @brief Method get_value, addr 0x18184d410, size 0xd0, virtual false, abstract: false, final false
inline bool get_value() ;

/// @brief Method get_valuePrev, addr 0x18184d340, size 0xd0, virtual false, abstract: false, final false
inline bool get_valuePrev() ;

/// @brief Method jmLaufljZWsYcnAjLWWDzommgkLo, addr 0x18184d4e0, size 0x1e0, virtual false, abstract: false, final false
inline void jmLaufljZWsYcnAjLWWDzommgkLo(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller_Button() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller_Button", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller_Button(Controller_Button && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller_Button", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller_Button(Controller_Button const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1822};

/// @brief Field lbtDYtXcJUFDuErILgeWJXDpDfBuA, offset: 0x51, size: 0x1, def value: None
 bool  ___lbtDYtXcJUFDuErILgeWJXDpDfBuA;

/// @brief Field uHECxQVPxXBMAIBRHeZOPNMTnbEHA, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Data::Mapping::HardwareButtonInfo*  ___uHECxQVPxXBMAIBRHeZOPNMTnbEHA;

/// @brief Size padding 0x68 - 0x60 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Controller_Button, ___lbtDYtXcJUFDuErILgeWJXDpDfBuA) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Button, ___uHECxQVPxXBMAIBRHeZOPNMTnbEHA) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Rewired::Controller_Button) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/CompoundElement/xVfBJkhaixVsvOdQJHsyxJPicLqIA
class CORDL_TYPE CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA : public ::System::Object {
public:
// Declarations
/// @brief Field MPwDFJpIlTHEWHoFxxZVQRvxPHvj, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_MPwDFJpIlTHEWHoFxxZVQRvxPHvj, put=__cordl_internal_set_MPwDFJpIlTHEWHoFxxZVQRvxPHvj)) int32_t  MPwDFJpIlTHEWHoFxxZVQRvxPHvj;

/// @brief Field vWCmWaZGvanMDPVcgcfhOVJJdXqV, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_vWCmWaZGvanMDPVcgcfhOVJJdXqV, put=__cordl_internal_set_vWCmWaZGvanMDPVcgcfhOVJJdXqV)) ::Rewired::Controller_Element*  vWCmWaZGvanMDPVcgcfhOVJJdXqV;

static inline ::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA* New_ctor(::Rewired::Controller_Element*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr int32_t const& __cordl_internal_get_MPwDFJpIlTHEWHoFxxZVQRvxPHvj() const;

constexpr int32_t& __cordl_internal_get_MPwDFJpIlTHEWHoFxxZVQRvxPHvj() ;

constexpr ::Rewired::Controller_Element* const& __cordl_internal_get_vWCmWaZGvanMDPVcgcfhOVJJdXqV() const;

constexpr ::Rewired::Controller_Element*& __cordl_internal_get_vWCmWaZGvanMDPVcgcfhOVJJdXqV() ;

constexpr void __cordl_internal_set_MPwDFJpIlTHEWHoFxxZVQRvxPHvj(int32_t  value) ;

constexpr void __cordl_internal_set_vWCmWaZGvanMDPVcgcfhOVJJdXqV(::Rewired::Controller_Element*  value) ;

/// @brief Method .ctor, addr 0x180c3ff30, size 0x4250, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller_Element*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA(CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA(CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1823};

/// @brief Field vWCmWaZGvanMDPVcgcfhOVJJdXqV, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Controller_Element*  ___vWCmWaZGvanMDPVcgcfhOVJJdXqV;

/// @brief Field MPwDFJpIlTHEWHoFxxZVQRvxPHvj, offset: 0x18, size: 0x4, def value: None
 int32_t  ___MPwDFJpIlTHEWHoFxxZVQRvxPHvj;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA, ___vWCmWaZGvanMDPVcgcfhOVJJdXqV) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA, ___MPwDFJpIlTHEWHoFxxZVQRvxPHvj) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.CompoundControllerElementType, Rewired.Controller::CompoundElement::xVfBJkhaixVsvOdQJHsyxJPicLqIA, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/CompoundElement
class CORDL_TYPE Controller_CompoundElement : public ::System::Object {
public:
// Declarations
using xVfBJkhaixVsvOdQJHsyxJPicLqIA = ::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA;

/// @brief Field QhGrRhnjOrXOgodLtFUSDXnulGyP, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_QhGrRhnjOrXOgodLtFUSDXnulGyP, put=__cordl_internal_set_QhGrRhnjOrXOgodLtFUSDXnulGyP)) ::ArrayW<::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA*>  QhGrRhnjOrXOgodLtFUSDXnulGyP;

/// @brief Field WSbNBxuRgNvLoBMgNrZXtAolBKJ, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WSbNBxuRgNvLoBMgNrZXtAolBKJ, put=__cordl_internal_set_WSbNBxuRgNvLoBMgNrZXtAolBKJ)) ::Rewired::Controller*  WSbNBxuRgNvLoBMgNrZXtAolBKJ;

/// @brief Field ansvADhIwXDHyuAZPsvdmXxoaJNU, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ansvADhIwXDHyuAZPsvdmXxoaJNU, put=__cordl_internal_set_ansvADhIwXDHyuAZPsvdmXxoaJNU)) int32_t  ansvADhIwXDHyuAZPsvdmXxoaJNU;

 __declspec(property(get=get_elementCapacity)) int32_t  elementCapacity;

 __declspec(property(get=get_elementCount)) int32_t  elementCount;

 __declspec(property(get=get_elementIdentifier)) ::Rewired::ControllerElementIdentifier*  elementIdentifier;

/// @brief Field fJQEVJgmxcHXKhBgHqBavEfJEnybb, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_fJQEVJgmxcHXKhBgHqBavEfJEnybb, put=__cordl_internal_set_fJQEVJgmxcHXKhBgHqBavEfJEnybb)) int32_t  fJQEVJgmxcHXKhBgHqBavEfJEnybb;

/// @brief Field gcGxJkaTlbxPYjsrCMRVzgUfGeiT, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_gcGxJkaTlbxPYjsrCMRVzgUfGeiT, put=__cordl_internal_set_gcGxJkaTlbxPYjsrCMRVzgUfGeiT)) int32_t  gcGxJkaTlbxPYjsrCMRVzgUfGeiT;

 __declspec(property(get=get_hasElements)) bool  hasElements;

 __declspec(property(get=get_id)) int32_t  id;

/// @brief Field jQXCzQoxmvLFEuRPheqRHgXjAcukA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_jQXCzQoxmvLFEuRPheqRHgXjAcukA, put=__cordl_internal_set_jQXCzQoxmvLFEuRPheqRHgXjAcukA)) ::StringW  jQXCzQoxmvLFEuRPheqRHgXjAcukA;

 __declspec(property(get=get_name)) ::StringW  name;

/// @brief Field pAagrzZgqmcAqPalrHBYjJatnAVQA, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_pAagrzZgqmcAqPalrHBYjJatnAVQA, put=__cordl_internal_set_pAagrzZgqmcAqPalrHBYjJatnAVQA)) ::Rewired::CompoundControllerElementType  pAagrzZgqmcAqPalrHBYjJatnAVQA;

 __declspec(property(get=get_type)) ::Rewired::CompoundControllerElementType  type;

/// @brief Method BJGBrenexSXFMQipxATSlgLKiuEq, addr 0x18184d6c0, size 0x50, virtual false, abstract: false, final false
inline int32_t BJGBrenexSXFMQipxATSlgLKiuEq() ;

/// @brief Method NWBxIdTNcfovRgDakStWoBStyYfQ, addr 0x18184d710, size 0x210, virtual false, abstract: false, final false
inline bool NWBxIdTNcfovRgDakStWoBStyYfQ(::Rewired::Controller_Element*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Controller_CompoundElement* New_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::CompoundControllerElementType  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method OxljAgWLJfgSrAXfvRvdBxTcpOHf, addr 0x18184d920, size 0xe0, virtual false, abstract: false, final false
inline bool OxljAgWLJfgSrAXfvRvdBxTcpOHf(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RoqEMNdazTfNiKkCLKUsxgCyjeGpA, addr 0x18184da00, size 0xa0, virtual false, abstract: false, final false
inline bool RoqEMNdazTfNiKkCLKUsxgCyjeGpA(::Rewired::Controller_Element*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::ArrayW<::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA*> const& __cordl_internal_get_QhGrRhnjOrXOgodLtFUSDXnulGyP() const;

constexpr ::ArrayW<::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA*>& __cordl_internal_get_QhGrRhnjOrXOgodLtFUSDXnulGyP() ;

constexpr ::Rewired::Controller* const& __cordl_internal_get_WSbNBxuRgNvLoBMgNrZXtAolBKJ() const;

constexpr ::Rewired::Controller*& __cordl_internal_get_WSbNBxuRgNvLoBMgNrZXtAolBKJ() ;

constexpr int32_t const& __cordl_internal_get_ansvADhIwXDHyuAZPsvdmXxoaJNU() const;

constexpr int32_t& __cordl_internal_get_ansvADhIwXDHyuAZPsvdmXxoaJNU() ;

constexpr int32_t const& __cordl_internal_get_fJQEVJgmxcHXKhBgHqBavEfJEnybb() const;

constexpr int32_t& __cordl_internal_get_fJQEVJgmxcHXKhBgHqBavEfJEnybb() ;

constexpr int32_t const& __cordl_internal_get_gcGxJkaTlbxPYjsrCMRVzgUfGeiT() const;

constexpr int32_t& __cordl_internal_get_gcGxJkaTlbxPYjsrCMRVzgUfGeiT() ;

constexpr ::StringW const& __cordl_internal_get_jQXCzQoxmvLFEuRPheqRHgXjAcukA() const;

constexpr ::StringW& __cordl_internal_get_jQXCzQoxmvLFEuRPheqRHgXjAcukA() ;

constexpr ::Rewired::CompoundControllerElementType const& __cordl_internal_get_pAagrzZgqmcAqPalrHBYjJatnAVQA() const;

constexpr ::Rewired::CompoundControllerElementType& __cordl_internal_get_pAagrzZgqmcAqPalrHBYjJatnAVQA() ;

constexpr void __cordl_internal_set_QhGrRhnjOrXOgodLtFUSDXnulGyP(::ArrayW<::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA*>  value) ;

constexpr void __cordl_internal_set_WSbNBxuRgNvLoBMgNrZXtAolBKJ(::Rewired::Controller*  value) ;

constexpr void __cordl_internal_set_ansvADhIwXDHyuAZPsvdmXxoaJNU(int32_t  value) ;

constexpr void __cordl_internal_set_fJQEVJgmxcHXKhBgHqBavEfJEnybb(int32_t  value) ;

constexpr void __cordl_internal_set_gcGxJkaTlbxPYjsrCMRVzgUfGeiT(int32_t  value) ;

constexpr void __cordl_internal_set_jQXCzQoxmvLFEuRPheqRHgXjAcukA(::StringW  value) ;

constexpr void __cordl_internal_set_pAagrzZgqmcAqPalrHBYjJatnAVQA(::Rewired::CompoundControllerElementType  value) ;

/// @brief Method .ctor, addr 0x18184daa0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::CompoundControllerElementType  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method aDAjWRxnzTnjEOSvxCRYevrefhw, addr 0x18184db70, size 0x100, virtual false, abstract: false, final false
inline void aDAjWRxnzTnjEOSvxCRYevrefhw() ;

/// @brief Method get_elementCapacity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_elementCapacity() ;

/// @brief Method get_elementCount, addr 0x18184dc70, size 0x60, virtual false, abstract: false, final false
inline int32_t get_elementCount() ;

/// @brief Method get_elementIdentifier, addr 0x18184dcd0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* get_elementIdentifier() ;

/// @brief Method get_hasElements, addr 0x18184dd50, size 0x60, virtual false, abstract: false, final false
inline bool get_hasElements() ;

/// @brief Method get_id, addr 0x18184ddb0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_name, addr 0x18184de10, size 0x70, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_type, addr 0x18184de80, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::CompoundControllerElementType get_type() ;

/// @brief Method lPaTtmkOSAlbWZqDzJuLiQvTESbf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
inline  lPaTtmkOSAlbWZqDzJuLiQvTESbf(int32_t  _cordl_fixed_empty_name_whitespace, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method rebbVliQJuGmAvBEAXwlflKGbtsDb, addr 0x18184dee0, size 0x70, virtual false, abstract: false, final false
inline int32_t rebbVliQJuGmAvBEAXwlflKGbtsDb(::Rewired::Controller_Element*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method unALGjBtMCwSvxNvtRzQLqSLGcZ, addr 0x18184df50, size 0x100, virtual false, abstract: false, final false
inline bool unALGjBtMCwSvxNvtRzQLqSLGcZ(::Rewired::Controller_Element*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method wJXjdMWLUpdwxZmZwoSZvOQtJEtQ, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename >
inline  wJXjdMWLUpdwxZmZwoSZvOQtJEtQ(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method wJXjdMWLUpdwxZmZwoSZvOQtJEtQ, addr 0x18184e050, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::Controller_Element* wJXjdMWLUpdwxZmZwoSZvOQtJEtQ(int32_t  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller_CompoundElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller_CompoundElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller_CompoundElement(Controller_CompoundElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller_CompoundElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller_CompoundElement(Controller_CompoundElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1824};

/// @brief Field fJQEVJgmxcHXKhBgHqBavEfJEnybb, offset: 0x10, size: 0x4, def value: None
 int32_t  ___fJQEVJgmxcHXKhBgHqBavEfJEnybb;

/// @brief Field jQXCzQoxmvLFEuRPheqRHgXjAcukA, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___jQXCzQoxmvLFEuRPheqRHgXjAcukA;

/// @brief Field pAagrzZgqmcAqPalrHBYjJatnAVQA, offset: 0x20, size: 0x4, def value: None
 ::Rewired::CompoundControllerElementType  ___pAagrzZgqmcAqPalrHBYjJatnAVQA;

/// @brief Field ansvADhIwXDHyuAZPsvdmXxoaJNU, offset: 0x24, size: 0x4, def value: None
 int32_t  ___ansvADhIwXDHyuAZPsvdmXxoaJNU;

/// @brief Field QhGrRhnjOrXOgodLtFUSDXnulGyP, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Rewired::CompoundElement_Controller_xVfBJkhaixVsvOdQJHsyxJPicLqIA*>  ___QhGrRhnjOrXOgodLtFUSDXnulGyP;

/// @brief Field WSbNBxuRgNvLoBMgNrZXtAolBKJ, offset: 0x30, size: 0x8, def value: None
 ::Rewired::Controller*  ___WSbNBxuRgNvLoBMgNrZXtAolBKJ;

/// @brief Field gcGxJkaTlbxPYjsrCMRVzgUfGeiT, offset: 0x38, size: 0x4, def value: None
 int32_t  ___gcGxJkaTlbxPYjsrCMRVzgUfGeiT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Controller_CompoundElement, ___fJQEVJgmxcHXKhBgHqBavEfJEnybb) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_CompoundElement, ___jQXCzQoxmvLFEuRPheqRHgXjAcukA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_CompoundElement, ___pAagrzZgqmcAqPalrHBYjJatnAVQA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_CompoundElement, ___ansvADhIwXDHyuAZPsvdmXxoaJNU) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_CompoundElement, ___QhGrRhnjOrXOgodLtFUSDXnulGyP) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_CompoundElement, ___WSbNBxuRgNvLoBMgNrZXtAolBKJ) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_CompoundElement, ___gcGxJkaTlbxPYjsrCMRVzgUfGeiT) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Rewired::Controller_CompoundElement) == 0x40, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::CompoundElement
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Axis2D
class CORDL_TYPE Controller_Axis2D : public ::Rewired::Controller_CompoundElement {
public:
// Declarations
 __declspec(property(get=get_elementCapacity)) int32_t  elementCapacity;

/// @brief Field tIeomHVDyxMENSmhAMKeiJhgYFqr, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tIeomHVDyxMENSmhAMKeiJhgYFqr, put=__cordl_internal_set_tIeomHVDyxMENSmhAMKeiJhgYFqr)) ::Rewired::CalibrationMap*  tIeomHVDyxMENSmhAMKeiJhgYFqr;

 __declspec(property(get=get_value)) ::UnityEngine::Vector2  value;

 __declspec(property(get=get_valuePrev)) ::UnityEngine::Vector2  valuePrev;

 __declspec(property(get=get_valueRaw)) ::UnityEngine::Vector2  valueRaw;

 __declspec(property(get=get_valueRawPrev)) ::UnityEngine::Vector2  valueRawPrev;

 __declspec(property(get=get_xAxis)) ::Rewired::Controller_Axis*  xAxis;

 __declspec(property(get=get_yAxis)) ::Rewired::Controller_Axis*  yAxis;

static inline ::Rewired::Controller_Axis2D* New_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Controller_Axis*  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::Controller_Axis*  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::CalibrationMap*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method WDhCIXvwgZfmPAUzOMYMHiWodfUBb, addr 0x1818495b0, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 WDhCIXvwgZfmPAUzOMYMHiWodfUBb() ;

constexpr ::Rewired::CalibrationMap* const& __cordl_internal_get_tIeomHVDyxMENSmhAMKeiJhgYFqr() const;

constexpr ::Rewired::CalibrationMap*& __cordl_internal_get_tIeomHVDyxMENSmhAMKeiJhgYFqr() ;

constexpr void __cordl_internal_set_tIeomHVDyxMENSmhAMKeiJhgYFqr(::Rewired::CalibrationMap*  value) ;

/// @brief Method .ctor, addr 0x181849750, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Controller_Axis*  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::Controller_Axis*  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::CalibrationMap*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method get_elementCapacity, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_elementCapacity() ;

/// @brief Method get_value, addr 0x181849c80, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_value() ;

/// @brief Method get_valuePrev, addr 0x1818497b0, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_valuePrev() ;

/// @brief Method get_valueRaw, addr 0x181849b20, size 0x160, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_valueRaw() ;

/// @brief Method get_valueRawPrev, addr 0x1818499c0, size 0x160, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_valueRawPrev() ;

/// @brief Method get_xAxis, addr 0x181849e90, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Axis* get_xAxis() ;

/// @brief Method get_yAxis, addr 0x181849f00, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Axis* get_yAxis() ;

/// @brief Method rRpvlbZehXvRJlihCsjgRuEqcaue, addr 0x181849f70, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 rRpvlbZehXvRJlihCsjgRuEqcaue() ;

/// @brief Method uxKeZSexSwhhECrAhqgOpakHJUwjA, addr 0x18184a110, size 0x250, virtual false, abstract: false, final false
inline void uxKeZSexSwhhECrAhqgOpakHJUwjA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller_Axis2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller_Axis2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller_Axis2D(Controller_Axis2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller_Axis2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller_Axis2D(Controller_Axis2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1825};

/// @brief Field gzoobPPlryBdCDHjgMWTcghDpARS offset 0xffffffff size 0x4
static constexpr int32_t  gzoobPPlryBdCDHjgMWTcghDpARS{static_cast<int32_t>(0x2)};

/// @brief Field tIeomHVDyxMENSmhAMKeiJhgYFqr, offset: 0x40, size: 0x8, def value: None
 ::Rewired::CalibrationMap*  ___tIeomHVDyxMENSmhAMKeiJhgYFqr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Controller_Axis2D, ___tIeomHVDyxMENSmhAMKeiJhgYFqr) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Rewired::Controller_Axis2D) == 0x48, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::Button, Rewired.Controller::CompoundElement
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Hat
class CORDL_TYPE Controller_Hat : public ::Rewired::Controller_CompoundElement {
public:
// Declarations
 __declspec(property(get=get_Buttons)) ::System::Collections::Generic::IList_1<::Rewired::Controller_Button*>*  Buttons;

/// @brief Field HeCrTiIXYnIIfvOvCRytGRYPgFOg, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_HeCrTiIXYnIIfvOvCRytGRYPgFOg, put=__cordl_internal_set_HeCrTiIXYnIIfvOvCRytGRYPgFOg)) ::ArrayW<int32_t>  HeCrTiIXYnIIfvOvCRytGRYPgFOg;

/// @brief Field JbZIFvBEFZwvcUcLpQraBXxpqNekA, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_JbZIFvBEFZwvcUcLpQraBXxpqNekA, put=__cordl_internal_set_JbZIFvBEFZwvcUcLpQraBXxpqNekA)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*  JbZIFvBEFZwvcUcLpQraBXxpqNekA;

/// @brief Field VuCmhlCvwsnquIcBsSHflfkskkmQ, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_VuCmhlCvwsnquIcBsSHflfkskkmQ, put=__cordl_internal_set_VuCmhlCvwsnquIcBsSHflfkskkmQ)) bool  VuCmhlCvwsnquIcBsSHflfkskkmQ;

/// @brief Field WfQtZUNpOeUKSjPxfUdLBShrqpgf, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_WfQtZUNpOeUKSjPxfUdLBShrqpgf, put=__cordl_internal_set_WfQtZUNpOeUKSjPxfUdLBShrqpgf)) int32_t  WfQtZUNpOeUKSjPxfUdLBShrqpgf;

 __declspec(property(get=get_buttonDown)) ::Rewired::Controller_Button*  buttonDown;

 __declspec(property(get=get_buttonDownLeft)) ::Rewired::Controller_Button*  buttonDownLeft;

 __declspec(property(get=get_buttonDownRight)) ::Rewired::Controller_Button*  buttonDownRight;

 __declspec(property(get=get_buttonLeft)) ::Rewired::Controller_Button*  buttonLeft;

 __declspec(property(get=get_buttonRight)) ::Rewired::Controller_Button*  buttonRight;

 __declspec(property(get=get_buttonUp)) ::Rewired::Controller_Button*  buttonUp;

 __declspec(property(get=get_buttonUpLeft)) ::Rewired::Controller_Button*  buttonUpLeft;

 __declspec(property(get=get_buttonUpRight)) ::Rewired::Controller_Button*  buttonUpRight;

 __declspec(property(get=get_directionCount)) int32_t  directionCount;

 __declspec(property(get=get_elementCapacity)) int32_t  elementCapacity;

 __declspec(property(get=get_force4Way, put=set_force4Way)) bool  force4Way;

/// @brief Field uFoOsLDSySapZJlCBELxdAFeNqKD, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_uFoOsLDSySapZJlCBELxdAFeNqKD, put=__cordl_internal_set_uFoOsLDSySapZJlCBELxdAFeNqKD)) ::ArrayW<::Rewired::Controller_Button*>  uFoOsLDSySapZJlCBELxdAFeNqKD;

/// @brief Method EznejggdlmyTIIvBIatxKbLdGiBi, addr 0x181858ce0, size 0x150, virtual false, abstract: false, final false
inline void EznejggdlmyTIIvBIatxKbLdGiBi(::Rewired::Controller_Button*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method MnAgTVDPyswNSPyJFyaFwsaahrAc, addr 0x181858e30, size 0x440, virtual false, abstract: false, final false
inline void MnAgTVDPyswNSPyJFyaFwsaahrAc(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Controller_Hat* New_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::Controller_Button*>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_HeCrTiIXYnIIfvOvCRytGRYPgFOg() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_HeCrTiIXYnIIfvOvCRytGRYPgFOg() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>* const& __cordl_internal_get_JbZIFvBEFZwvcUcLpQraBXxpqNekA() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*& __cordl_internal_get_JbZIFvBEFZwvcUcLpQraBXxpqNekA() ;

constexpr bool const& __cordl_internal_get_VuCmhlCvwsnquIcBsSHflfkskkmQ() const;

constexpr bool& __cordl_internal_get_VuCmhlCvwsnquIcBsSHflfkskkmQ() ;

constexpr int32_t const& __cordl_internal_get_WfQtZUNpOeUKSjPxfUdLBShrqpgf() const;

constexpr int32_t& __cordl_internal_get_WfQtZUNpOeUKSjPxfUdLBShrqpgf() ;

constexpr ::ArrayW<::Rewired::Controller_Button*> const& __cordl_internal_get_uFoOsLDSySapZJlCBELxdAFeNqKD() const;

constexpr ::ArrayW<::Rewired::Controller_Button*>& __cordl_internal_get_uFoOsLDSySapZJlCBELxdAFeNqKD() ;

constexpr void __cordl_internal_set_HeCrTiIXYnIIfvOvCRytGRYPgFOg(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_JbZIFvBEFZwvcUcLpQraBXxpqNekA(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*  value) ;

constexpr void __cordl_internal_set_VuCmhlCvwsnquIcBsSHflfkskkmQ(bool  value) ;

constexpr void __cordl_internal_set_WfQtZUNpOeUKSjPxfUdLBShrqpgf(int32_t  value) ;

constexpr void __cordl_internal_set_uFoOsLDSySapZJlCBELxdAFeNqKD(::ArrayW<::Rewired::Controller_Button*>  value) ;

/// @brief Method .ctor, addr 0x181859270, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::Controller_Button*>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method get_Buttons, addr 0x1818583e0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_Button*>* get_Buttons() ;

/// @brief Method get_buttonDown, addr 0x181859460, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonDown() ;

/// @brief Method get_buttonDownLeft, addr 0x1818593f0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonDownLeft() ;

/// @brief Method get_buttonDownRight, addr 0x1818584b0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonDownRight() ;

/// @brief Method get_buttonLeft, addr 0x1818594d0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonLeft() ;

/// @brief Method get_buttonRight, addr 0x181858440, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonRight() ;

/// @brief Method get_buttonUp, addr 0x181858590, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonUp() ;

/// @brief Method get_buttonUpLeft, addr 0x181859540, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonUpLeft() ;

/// @brief Method get_buttonUpRight, addr 0x181858520, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonUpRight() ;

/// @brief Method get_directionCount, addr 0x1818595b0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_directionCount() ;

/// @brief Method get_elementCapacity, addr 0x180308dd0, size 0x10, virtual true, abstract: false, final false
inline int32_t get_elementCapacity() ;

/// @brief Method get_force4Way, addr 0x181859610, size 0x60, virtual false, abstract: false, final false
inline bool get_force4Way() ;

/// @brief Method pdiBmkzWrQfkDdiSKOsEafaglLuPB, addr 0x181859670, size 0xa0, virtual false, abstract: false, final false
inline void pdiBmkzWrQfkDdiSKOsEafaglLuPB(::Rewired::Controller_Button*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method set_force4Way, addr 0x181859710, size 0x70, virtual false, abstract: false, final false
inline void set_force4Way(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller_Hat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller_Hat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller_Hat(Controller_Hat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller_Hat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller_Hat(Controller_Hat const& ) = delete;

/// @brief Field AlvtkbjkmDchdHBHdOQwPUPoaMPGA offset 0xffffffff size 0x4
static constexpr int32_t  AlvtkbjkmDchdHBHdOQwPUPoaMPGA{static_cast<int32_t>(0x5)};

/// @brief Field BnLSROYljvtLfiMXXwkphgQkTCB offset 0xffffffff size 0x4
static constexpr int32_t  BnLSROYljvtLfiMXXwkphgQkTCB{static_cast<int32_t>(0x8)};

/// @brief Field EozhvOfpiHhYqxcceLDJbRtbYBgK offset 0xffffffff size 0x4
static constexpr int32_t  EozhvOfpiHhYqxcceLDJbRtbYBgK{static_cast<int32_t>(0x4)};

/// @brief Field TLMolpfwGlADbqnkDvQRSFOLBGyh offset 0xffffffff size 0x4
static constexpr int32_t  TLMolpfwGlADbqnkDvQRSFOLBGyh{static_cast<int32_t>(0x6)};

/// @brief Field UTuiofACyXmIXQLTcEjyEgJOFowF offset 0xffffffff size 0x4
static constexpr int32_t  UTuiofACyXmIXQLTcEjyEgJOFowF{static_cast<int32_t>(0x0)};

/// @brief Field ZqVQGHpMBqwZHzACoUUcZGdxsYqr offset 0xffffffff size 0x4
static constexpr int32_t  ZqVQGHpMBqwZHzACoUUcZGdxsYqr{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1826};

/// @brief Field ljeldigXSYeZGymAXuiGRgoJNeAj offset 0xffffffff size 0x4
static constexpr int32_t  ljeldigXSYeZGymAXuiGRgoJNeAj{static_cast<int32_t>(0x7)};

/// @brief Field lzNwzSmDbYbZWdPRNXrNXLJATxzF offset 0xffffffff size 0x4
static constexpr int32_t  lzNwzSmDbYbZWdPRNXrNXLJATxzF{static_cast<int32_t>(0x1)};

/// @brief Field rfVCfoipufoqDEavpRksOPBBwQJoA offset 0xffffffff size 0x4
static constexpr int32_t  rfVCfoipufoqDEavpRksOPBBwQJoA{static_cast<int32_t>(0x3)};

/// @brief Field WfQtZUNpOeUKSjPxfUdLBShrqpgf, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___WfQtZUNpOeUKSjPxfUdLBShrqpgf;

/// @brief Field uFoOsLDSySapZJlCBELxdAFeNqKD, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Rewired::Controller_Button*>  ___uFoOsLDSySapZJlCBELxdAFeNqKD;

/// @brief Field JbZIFvBEFZwvcUcLpQraBXxpqNekA, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*  ___JbZIFvBEFZwvcUcLpQraBXxpqNekA;

/// @brief Field HeCrTiIXYnIIfvOvCRytGRYPgFOg, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___HeCrTiIXYnIIfvOvCRytGRYPgFOg;

/// @brief Field VuCmhlCvwsnquIcBsSHflfkskkmQ, offset: 0x58, size: 0x1, def value: None
 bool  ___VuCmhlCvwsnquIcBsSHflfkskkmQ;

/// @brief Size padding 0x68 - 0x60 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Controller_Hat, ___WfQtZUNpOeUKSjPxfUdLBShrqpgf) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Hat, ___uFoOsLDSySapZJlCBELxdAFeNqKD) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Hat, ___JbZIFvBEFZwvcUcLpQraBXxpqNekA) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Hat, ___HeCrTiIXYnIIfvOvCRytGRYPgFOg) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Hat, ___VuCmhlCvwsnquIcBsSHflfkskkmQ) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Rewired::Controller_Hat) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::Button, Rewired.Controller::CompoundElement
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/DirectionalPad
class CORDL_TYPE Controller_DirectionalPad : public ::Rewired::Controller_CompoundElement {
public:
// Declarations
/// @brief Field AIepVXuxwYLqqkLNahPdGBxRncpHb, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_AIepVXuxwYLqqkLNahPdGBxRncpHb, put=__cordl_internal_set_AIepVXuxwYLqqkLNahPdGBxRncpHb)) ::ArrayW<::Rewired::Controller_Button*>  AIepVXuxwYLqqkLNahPdGBxRncpHb;

 __declspec(property(get=get_Buttons)) ::System::Collections::Generic::IList_1<::Rewired::Controller_Button*>*  Buttons;

/// @brief Field PvvXrniuUYgqyiYabAUOteGCfeuU, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_PvvXrniuUYgqyiYabAUOteGCfeuU, put=__cordl_internal_set_PvvXrniuUYgqyiYabAUOteGCfeuU)) ::ArrayW<int32_t>  PvvXrniuUYgqyiYabAUOteGCfeuU;

 __declspec(property(get=get_buttonDown)) ::Rewired::Controller_Button*  buttonDown;

 __declspec(property(get=get_buttonLeft)) ::Rewired::Controller_Button*  buttonLeft;

 __declspec(property(get=get_buttonRight)) ::Rewired::Controller_Button*  buttonRight;

 __declspec(property(get=get_buttonUp)) ::Rewired::Controller_Button*  buttonUp;

 __declspec(property(get=get_elementCapacity)) int32_t  elementCapacity;

/// @brief Field gZdhMyhTsWxGVUEXqPXWgqujddFyb, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_gZdhMyhTsWxGVUEXqPXWgqujddFyb, put=__cordl_internal_set_gZdhMyhTsWxGVUEXqPXWgqujddFyb)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*  gZdhMyhTsWxGVUEXqPXWgqujddFyb;

/// @brief Field iiPNkSyWkcxFjeqAoUtxRtMBIIHu, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_iiPNkSyWkcxFjeqAoUtxRtMBIIHu, put=__cordl_internal_set_iiPNkSyWkcxFjeqAoUtxRtMBIIHu)) int32_t  iiPNkSyWkcxFjeqAoUtxRtMBIIHu;

static inline ::Rewired::Controller_DirectionalPad* New_ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::Controller_Button*>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4) ;

constexpr ::ArrayW<::Rewired::Controller_Button*> const& __cordl_internal_get_AIepVXuxwYLqqkLNahPdGBxRncpHb() const;

constexpr ::ArrayW<::Rewired::Controller_Button*>& __cordl_internal_get_AIepVXuxwYLqqkLNahPdGBxRncpHb() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_PvvXrniuUYgqyiYabAUOteGCfeuU() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_PvvXrniuUYgqyiYabAUOteGCfeuU() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>* const& __cordl_internal_get_gZdhMyhTsWxGVUEXqPXWgqujddFyb() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*& __cordl_internal_get_gZdhMyhTsWxGVUEXqPXWgqujddFyb() ;

constexpr int32_t const& __cordl_internal_get_iiPNkSyWkcxFjeqAoUtxRtMBIIHu() const;

constexpr int32_t& __cordl_internal_get_iiPNkSyWkcxFjeqAoUtxRtMBIIHu() ;

constexpr void __cordl_internal_set_AIepVXuxwYLqqkLNahPdGBxRncpHb(::ArrayW<::Rewired::Controller_Button*>  value) ;

constexpr void __cordl_internal_set_PvvXrniuUYgqyiYabAUOteGCfeuU(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_gZdhMyhTsWxGVUEXqPXWgqujddFyb(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*  value) ;

constexpr void __cordl_internal_set_iiPNkSyWkcxFjeqAoUtxRtMBIIHu(int32_t  value) ;

/// @brief Method .ctor, addr 0x181858270, size 0x170, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::Controller_Button*>  _cordl_fixed_empty_name_whitespace_param_3, ::ArrayW<int32_t>  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method get_Buttons, addr 0x1818583e0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_Button*>* get_Buttons() ;

/// @brief Method get_buttonDown, addr 0x181858440, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonDown() ;

/// @brief Method get_buttonLeft, addr 0x1818584b0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonLeft() ;

/// @brief Method get_buttonRight, addr 0x181858520, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonRight() ;

/// @brief Method get_buttonUp, addr 0x181858590, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Controller_Button* get_buttonUp() ;

/// @brief Method get_elementCapacity, addr 0x180309580, size 0x10, virtual true, abstract: false, final false
inline int32_t get_elementCapacity() ;

/// @brief Method iBHuDgFegUkhspoAqaPqKTaumePI, addr 0x181858600, size 0xc0, virtual false, abstract: false, final false
inline void iBHuDgFegUkhspoAqaPqKTaumePI(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller_DirectionalPad() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller_DirectionalPad", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller_DirectionalPad(Controller_DirectionalPad && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller_DirectionalPad", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller_DirectionalPad(Controller_DirectionalPad const& ) = delete;

/// @brief Field CkIJQyIQWiPLJIBrPklAyvUUxFqf offset 0xffffffff size 0x4
static constexpr int32_t  CkIJQyIQWiPLJIBrPklAyvUUxFqf{static_cast<int32_t>(0x3)};

/// @brief Field QaJHztCgFUOWxGagFKGSWcMrCuwBc offset 0xffffffff size 0x4
static constexpr int32_t  QaJHztCgFUOWxGagFKGSWcMrCuwBc{static_cast<int32_t>(0x0)};

/// @brief Field VbRPyDZMWwOrDlHeqhfNtkdjAFVw offset 0xffffffff size 0x4
static constexpr int32_t  VbRPyDZMWwOrDlHeqhfNtkdjAFVw{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1827};

/// @brief Field sZCCJbcCHsfKiQuhUwGPLVpNhSsyA offset 0xffffffff size 0x4
static constexpr int32_t  sZCCJbcCHsfKiQuhUwGPLVpNhSsyA{static_cast<int32_t>(0x4)};

/// @brief Field vdfZUwgAhVBLEcRmRPzfsbtQeNWoA offset 0xffffffff size 0x4
static constexpr int32_t  vdfZUwgAhVBLEcRmRPzfsbtQeNWoA{static_cast<int32_t>(0x2)};

/// @brief Field iiPNkSyWkcxFjeqAoUtxRtMBIIHu, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___iiPNkSyWkcxFjeqAoUtxRtMBIIHu;

/// @brief Field AIepVXuxwYLqqkLNahPdGBxRncpHb, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Rewired::Controller_Button*>  ___AIepVXuxwYLqqkLNahPdGBxRncpHb;

/// @brief Field gZdhMyhTsWxGVUEXqPXWgqujddFyb, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*  ___gZdhMyhTsWxGVUEXqPXWgqujddFyb;

/// @brief Field PvvXrniuUYgqyiYabAUOteGCfeuU, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___PvvXrniuUYgqyiYabAUOteGCfeuU;

/// @brief Size padding 0x60 - 0x58 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Controller_DirectionalPad, ___iiPNkSyWkcxFjeqAoUtxRtMBIIHu) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_DirectionalPad, ___AIepVXuxwYLqqkLNahPdGBxRncpHb) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_DirectionalPad, ___gZdhMyhTsWxGVUEXqPXWgqujddFyb) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_DirectionalPad, ___PvvXrniuUYgqyiYabAUOteGCfeuU) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Rewired::Controller_DirectionalPad) == 0x60, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/Extension
class CORDL_TYPE Controller_Extension : public ::System::Object {
public:
// Declarations
/// @brief Field _reInputId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__reInputId, put=__cordl_internal_set__reInputId)) int32_t  _reInputId;

 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

 __declspec(property(get=get_enabled)) bool  enabled;

 __declspec(property(get=get_isJoystickConnected)) bool  isJoystickConnected;

/// @brief Field llsXUsJnIZIwEvtqxDBlhepWqTQv, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_llsXUsJnIZIwEvtqxDBlhepWqTQv, put=__cordl_internal_set_llsXUsJnIZIwEvtqxDBlhepWqTQv)) ::Rewired::Interfaces::IControllerExtensionSource*  llsXUsJnIZIwEvtqxDBlhepWqTQv;

/// @brief Field pINjEKMqpQBGOHILApFfJcyYgzmtA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pINjEKMqpQBGOHILApFfJcyYgzmtA, put=__cordl_internal_set_pINjEKMqpQBGOHILApFfJcyYgzmtA)) ::Rewired::Controller*  pINjEKMqpQBGOHILApFfJcyYgzmtA;

/// @brief Method Clear, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* Clone() ;

/// @brief Method GetController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetController() ;

/// @brief Method GetSource, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Interfaces::IControllerExtensionSource* GetSource() ;

/// @brief Method LVztbStxTBhLwsxLBZnBeZtgyYKJ, addr 0x181858a70, size 0x40, virtual false, abstract: false, final false
inline void LVztbStxTBhLwsxLBZnBeZtgyYKJ(::Rewired::Interfaces::IControllerExtensionSource*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Controller_Extension* New_ctor(::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Controller_Extension* New_ctor(::Rewired::Interfaces::IControllerExtensionSource*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SetController, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void SetController(::Rewired::Controller*  controller) ;

/// @brief Method SetSource, addr 0x181858ab0, size 0x50, virtual false, abstract: false, final false
inline void SetSource(::Rewired::Controller_Extension*  extension) ;

/// @brief Method SourceUpdated, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source) ;

/// @brief Method UpdateData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateData(::Rewired::UpdateLoopType  updateLoop) ;

constexpr int32_t const& __cordl_internal_get__reInputId() const;

constexpr int32_t& __cordl_internal_get__reInputId() ;

constexpr ::Rewired::Interfaces::IControllerExtensionSource* const& __cordl_internal_get_llsXUsJnIZIwEvtqxDBlhepWqTQv() const;

constexpr ::Rewired::Interfaces::IControllerExtensionSource*& __cordl_internal_get_llsXUsJnIZIwEvtqxDBlhepWqTQv() ;

constexpr ::Rewired::Controller* const& __cordl_internal_get_pINjEKMqpQBGOHILApFfJcyYgzmtA() const;

constexpr ::Rewired::Controller*& __cordl_internal_get_pINjEKMqpQBGOHILApFfJcyYgzmtA() ;

constexpr void __cordl_internal_set__reInputId(int32_t  value) ;

constexpr void __cordl_internal_set_llsXUsJnIZIwEvtqxDBlhepWqTQv(::Rewired::Interfaces::IControllerExtensionSource*  value) ;

constexpr void __cordl_internal_set_pINjEKMqpQBGOHILApFfJcyYgzmtA(::Rewired::Controller*  value) ;

/// @brief Method .ctor, addr 0x181858b00, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181858bc0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Interfaces::IControllerExtensionSource*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_controller, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_enabled, addr 0x181858c50, size 0x70, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_isJoystickConnected, addr 0x181858cc0, size 0x20, virtual false, abstract: false, final false
inline bool get_isJoystickConnected() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller_Extension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller_Extension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller_Extension(Controller_Extension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller_Extension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller_Extension(Controller_Extension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1828};

/// @brief Field pINjEKMqpQBGOHILApFfJcyYgzmtA, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Controller*  ___pINjEKMqpQBGOHILApFfJcyYgzmtA;

/// @brief Field llsXUsJnIZIwEvtqxDBlhepWqTQv, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Interfaces::IControllerExtensionSource*  ___llsXUsJnIZIwEvtqxDBlhepWqTQv;

/// @brief Field _reInputId, offset: 0x20, size: 0x4, def value: None
 int32_t  ____reInputId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Controller_Extension, ___pINjEKMqpQBGOHILApFfJcyYgzmtA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Extension, ___llsXUsJnIZIwEvtqxDBlhepWqTQv) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_Extension, ____reInputId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Controller_Extension) == 0x28, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/KGoGwPbjCefXXnmvLcXEtSuacaEE
class CORDL_TYPE Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Rewired::Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE*  __9;

/// @brief Field <>9__166_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__166_0, put=setStaticF___9__166_0)) ::System::Func_3<::Rewired::Controller*,::System::Guid,bool>*  __9__166_0;

/// @brief Field <>9__169_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__169_0, put=setStaticF___9__169_0)) ::System::Func_3<::Rewired::Controller*,::System::Type*,bool>*  __9__169_0;

/// @brief Method FBAaKjDGBnfvuszMrxwPJbwFRAcZ, addr 0x18185d110, size 0x1a0, virtual false, abstract: false, final false
inline bool FBAaKjDGBnfvuszMrxwPJbwFRAcZ(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method cvtKnrOBaeZwApBGKVkqknLUtNMM, addr 0x18185d2f0, size 0x110, virtual false, abstract: false, final false
inline bool cvtKnrOBaeZwApBGKVkqknLUtNMM(::Rewired::Controller*  _cordl_fixed_empty_name_whitespace, ::System::Type*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE* getStaticF___9() ;

static inline ::System::Func_3<::Rewired::Controller*,::System::Guid,bool>* getStaticF___9__166_0() ;

static inline ::System::Func_3<::Rewired::Controller*,::System::Type*,bool>* getStaticF___9__169_0() ;

static inline void setStaticF___9(::Rewired::Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE*  value) ;

static inline void setStaticF___9__166_0(::System::Func_3<::Rewired::Controller*,::System::Guid,bool>*  value) ;

static inline void setStaticF___9__169_0(::System::Func_3<::Rewired::Controller*,::System::Type*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE(Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE(Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1829};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/LmXrKYTYLIiFAIojUkxWncBmVqUn
class CORDL_TYPE Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn : public ::System::Object {
public:
// Declarations
/// @brief Field CYVEXGeRXBMFmySCwIoTMSkdjPcqA, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_CYVEXGeRXBMFmySCwIoTMSkdjPcqA, put=__cordl_internal_set_CYVEXGeRXBMFmySCwIoTMSkdjPcqA)) int32_t  CYVEXGeRXBMFmySCwIoTMSkdjPcqA;

/// @brief Field GbkfwEbPWTNUzTOHvHIbfUEdReJMc, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_GbkfwEbPWTNUzTOHvHIbfUEdReJMc, put=__cordl_internal_set_GbkfwEbPWTNUzTOHvHIbfUEdReJMc)) ::Rewired::ControllerPollingInfo  GbkfwEbPWTNUzTOHvHIbfUEdReJMc;

/// @brief Field KpudGJXpCQcwguOIFgBXxnAYZfKf, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_KpudGJXpCQcwguOIFgBXxnAYZfKf, put=__cordl_internal_set_KpudGJXpCQcwguOIFgBXxnAYZfKf)) int32_t  KpudGJXpCQcwguOIFgBXxnAYZfKf;

/// @brief Field SnPBARGgIdJwcriDAzkChpsiQTeaA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_SnPBARGgIdJwcriDAzkChpsiQTeaA, put=__cordl_internal_set_SnPBARGgIdJwcriDAzkChpsiQTeaA)) ::Rewired::Controller*  SnPBARGgIdJwcriDAzkChpsiQTeaA;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field kskyTKxGDGBSbeqbvTPhjeZQoQWn, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_kskyTKxGDGBSbeqbvTPhjeZQoQWn, put=__cordl_internal_set_kskyTKxGDGBSbeqbvTPhjeZQoQWn)) int32_t  kskyTKxGDGBSbeqbvTPhjeZQoQWn;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18185d880, size 0x260, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x18185dae0, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18185dae0, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_CYVEXGeRXBMFmySCwIoTMSkdjPcqA() const;

constexpr int32_t& __cordl_internal_get_CYVEXGeRXBMFmySCwIoTMSkdjPcqA() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_GbkfwEbPWTNUzTOHvHIbfUEdReJMc() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_GbkfwEbPWTNUzTOHvHIbfUEdReJMc() ;

constexpr int32_t const& __cordl_internal_get_KpudGJXpCQcwguOIFgBXxnAYZfKf() const;

constexpr int32_t& __cordl_internal_get_KpudGJXpCQcwguOIFgBXxnAYZfKf() ;

constexpr ::Rewired::Controller* const& __cordl_internal_get_SnPBARGgIdJwcriDAzkChpsiQTeaA() const;

constexpr ::Rewired::Controller*& __cordl_internal_get_SnPBARGgIdJwcriDAzkChpsiQTeaA() ;

constexpr int32_t const& __cordl_internal_get_kskyTKxGDGBSbeqbvTPhjeZQoQWn() const;

constexpr int32_t& __cordl_internal_get_kskyTKxGDGBSbeqbvTPhjeZQoQWn() ;

constexpr void __cordl_internal_set_CYVEXGeRXBMFmySCwIoTMSkdjPcqA(int32_t  value) ;

constexpr void __cordl_internal_set_GbkfwEbPWTNUzTOHvHIbfUEdReJMc(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_KpudGJXpCQcwguOIFgBXxnAYZfKf(int32_t  value) ;

constexpr void __cordl_internal_set_SnPBARGgIdJwcriDAzkChpsiQTeaA(::Rewired::Controller*  value) ;

constexpr void __cordl_internal_set_kskyTKxGDGBSbeqbvTPhjeZQoQWn(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn(Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn(Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1830};

/// @brief Field KpudGJXpCQcwguOIFgBXxnAYZfKf, offset: 0x10, size: 0x4, def value: None
 int32_t  ___KpudGJXpCQcwguOIFgBXxnAYZfKf;

/// @brief Field GbkfwEbPWTNUzTOHvHIbfUEdReJMc, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___GbkfwEbPWTNUzTOHvHIbfUEdReJMc;

/// @brief Field CYVEXGeRXBMFmySCwIoTMSkdjPcqA, offset: 0x50, size: 0x4, def value: None
 int32_t  ___CYVEXGeRXBMFmySCwIoTMSkdjPcqA;

/// @brief Field SnPBARGgIdJwcriDAzkChpsiQTeaA, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Controller*  ___SnPBARGgIdJwcriDAzkChpsiQTeaA;

/// @brief Field kskyTKxGDGBSbeqbvTPhjeZQoQWn, offset: 0x60, size: 0x4, def value: None
 int32_t  ___kskyTKxGDGBSbeqbvTPhjeZQoQWn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn, ___KpudGJXpCQcwguOIFgBXxnAYZfKf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn, ___GbkfwEbPWTNUzTOHvHIbfUEdReJMc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn, ___CYVEXGeRXBMFmySCwIoTMSkdjPcqA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn, ___SnPBARGgIdJwcriDAzkChpsiQTeaA) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn, ___kskyTKxGDGBSbeqbvTPhjeZQoQWn) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller/NxyOYzPlObaVereoMOyhDIIMlLlk
class CORDL_TYPE Controller_NxyOYzPlObaVereoMOyhDIIMlLlk : public ::System::Object {
public:
// Declarations
/// @brief Field BCmEzyRPShqmIDNYeKSHVKwpDyTy, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_BCmEzyRPShqmIDNYeKSHVKwpDyTy, put=__cordl_internal_set_BCmEzyRPShqmIDNYeKSHVKwpDyTy)) int32_t  BCmEzyRPShqmIDNYeKSHVKwpDyTy;

/// @brief Field FOloKxlkWNPZEmtcsJpLuoiHblRIA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_FOloKxlkWNPZEmtcsJpLuoiHblRIA, put=__cordl_internal_set_FOloKxlkWNPZEmtcsJpLuoiHblRIA)) ::Rewired::Controller*  FOloKxlkWNPZEmtcsJpLuoiHblRIA;

/// @brief Field JkzkYHqKFyAcemXKTJfmTyiwmwMF, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_JkzkYHqKFyAcemXKTJfmTyiwmwMF, put=__cordl_internal_set_JkzkYHqKFyAcemXKTJfmTyiwmwMF)) ::Rewired::ControllerPollingInfo  JkzkYHqKFyAcemXKTJfmTyiwmwMF;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field WhCJLMBbWJmDhEmoCDeAvwkSfDLY, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_WhCJLMBbWJmDhEmoCDeAvwkSfDLY, put=__cordl_internal_set_WhCJLMBbWJmDhEmoCDeAvwkSfDLY)) int32_t  WhCJLMBbWJmDhEmoCDeAvwkSfDLY;

/// @brief Field nqgrptbBhPQnkZQubYXXLfeqbHJw, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_nqgrptbBhPQnkZQubYXXLfeqbHJw, put=__cordl_internal_set_nqgrptbBhPQnkZQubYXXLfeqbHJw)) int32_t  nqgrptbBhPQnkZQubYXXLfeqbHJw;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18185db60, size 0x260, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::Controller_NxyOYzPlObaVereoMOyhDIIMlLlk* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x18185ddc0, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18185ddc0, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_BCmEzyRPShqmIDNYeKSHVKwpDyTy() const;

constexpr int32_t& __cordl_internal_get_BCmEzyRPShqmIDNYeKSHVKwpDyTy() ;

constexpr ::Rewired::Controller* const& __cordl_internal_get_FOloKxlkWNPZEmtcsJpLuoiHblRIA() const;

constexpr ::Rewired::Controller*& __cordl_internal_get_FOloKxlkWNPZEmtcsJpLuoiHblRIA() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_JkzkYHqKFyAcemXKTJfmTyiwmwMF() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_JkzkYHqKFyAcemXKTJfmTyiwmwMF() ;

constexpr int32_t const& __cordl_internal_get_WhCJLMBbWJmDhEmoCDeAvwkSfDLY() const;

constexpr int32_t& __cordl_internal_get_WhCJLMBbWJmDhEmoCDeAvwkSfDLY() ;

constexpr int32_t const& __cordl_internal_get_nqgrptbBhPQnkZQubYXXLfeqbHJw() const;

constexpr int32_t& __cordl_internal_get_nqgrptbBhPQnkZQubYXXLfeqbHJw() ;

constexpr void __cordl_internal_set_BCmEzyRPShqmIDNYeKSHVKwpDyTy(int32_t  value) ;

constexpr void __cordl_internal_set_FOloKxlkWNPZEmtcsJpLuoiHblRIA(::Rewired::Controller*  value) ;

constexpr void __cordl_internal_set_JkzkYHqKFyAcemXKTJfmTyiwmwMF(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_WhCJLMBbWJmDhEmoCDeAvwkSfDLY(int32_t  value) ;

constexpr void __cordl_internal_set_nqgrptbBhPQnkZQubYXXLfeqbHJw(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller_NxyOYzPlObaVereoMOyhDIIMlLlk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller_NxyOYzPlObaVereoMOyhDIIMlLlk", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller_NxyOYzPlObaVereoMOyhDIIMlLlk(Controller_NxyOYzPlObaVereoMOyhDIIMlLlk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller_NxyOYzPlObaVereoMOyhDIIMlLlk", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller_NxyOYzPlObaVereoMOyhDIIMlLlk(Controller_NxyOYzPlObaVereoMOyhDIIMlLlk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1831};

/// @brief Field WhCJLMBbWJmDhEmoCDeAvwkSfDLY, offset: 0x10, size: 0x4, def value: None
 int32_t  ___WhCJLMBbWJmDhEmoCDeAvwkSfDLY;

/// @brief Field JkzkYHqKFyAcemXKTJfmTyiwmwMF, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___JkzkYHqKFyAcemXKTJfmTyiwmwMF;

/// @brief Field BCmEzyRPShqmIDNYeKSHVKwpDyTy, offset: 0x50, size: 0x4, def value: None
 int32_t  ___BCmEzyRPShqmIDNYeKSHVKwpDyTy;

/// @brief Field FOloKxlkWNPZEmtcsJpLuoiHblRIA, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Controller*  ___FOloKxlkWNPZEmtcsJpLuoiHblRIA;

/// @brief Field nqgrptbBhPQnkZQubYXXLfeqbHJw, offset: 0x60, size: 0x4, def value: None
 int32_t  ___nqgrptbBhPQnkZQubYXXLfeqbHJw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Controller_NxyOYzPlObaVereoMOyhDIIMlLlk, ___WhCJLMBbWJmDhEmoCDeAvwkSfDLY) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_NxyOYzPlObaVereoMOyhDIIMlLlk, ___JkzkYHqKFyAcemXKTJfmTyiwmwMF) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_NxyOYzPlObaVereoMOyhDIIMlLlk, ___BCmEzyRPShqmIDNYeKSHVKwpDyTy) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_NxyOYzPlObaVereoMOyhDIIMlLlk, ___FOloKxlkWNPZEmtcsJpLuoiHblRIA) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller_NxyOYzPlObaVereoMOyhDIIMlLlk, ___nqgrptbBhPQnkZQubYXXLfeqbHJw) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::Controller_NxyOYzPlObaVereoMOyhDIIMlLlk) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Controller::Button, Rewired.ControllerIdentifier, Rewired.ControllerType, Rewired.IControllerTemplate, Rewired.InputSource, System.Guid, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Controller
class CORDL_TYPE Controller : public ::System::Object {
public:
// Declarations
using Axis = ::Rewired::Controller_Axis;

using Axis2D = ::Rewired::Controller_Axis2D;

using Button = ::Rewired::Controller_Button;

using CompoundElement = ::Rewired::Controller_CompoundElement;

using DirectionalPad = ::Rewired::Controller_DirectionalPad;

using Element = ::Rewired::Controller_Element;

using Extension = ::Rewired::Controller_Extension;

using Hat = ::Rewired::Controller_Hat;

using KGoGwPbjCefXXnmvLcXEtSuacaEE = ::Rewired::Controller_KGoGwPbjCefXXnmvLcXEtSuacaEE;

using LmXrKYTYLIiFAIojUkxWncBmVqUn = ::Rewired::Controller_LmXrKYTYLIiFAIojUkxWncBmVqUn;

using NxyOYzPlObaVereoMOyhDIIMlLlk = ::Rewired::Controller_NxyOYzPlObaVereoMOyhDIIMlLlk;

 __declspec(property(get=get_ButtonElementIdentifiers)) ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  ButtonElementIdentifiers;

 __declspec(property(get=get_Buttons)) ::System::Collections::Generic::IList_1<::Rewired::Controller_Button*>*  Buttons;

 __declspec(property(get=get_CompoundElements)) ::System::Collections::Generic::IList_1<::Rewired::Controller_CompoundElement*>*  CompoundElements;

 __declspec(property(get=RjUaIBBnbtKXLfPPbOuHBhBfGnCVA, put=gmKUiiaRVyhhJHHqJAsLUyaSMTfO)) ::Rewired::Internal::Localization::ITryGetLocalizedName*  DiStfYlkfPyvBXZJPRtOLIzPIytt;

/// @brief Field EhdelWqHbOHmohPNCqFpFiRZRbxxA, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_EhdelWqHbOHmohPNCqFpFiRZRbxxA, put=__cordl_internal_set_EhdelWqHbOHmohPNCqFpFiRZRbxxA)) ::ArrayW<::Rewired::IControllerTemplate*>  EhdelWqHbOHmohPNCqFpFiRZRbxxA;

 __declspec(property(get=get_ElementIdentifiers)) ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*  ElementIdentifiers;

 __declspec(property(get=get_Elements)) ::System::Collections::Generic::IList_1<::Rewired::Controller_Element*>*  Elements;

/// @brief Field FAkRGMOSmgEgasBRqXpdQdgDxDHM, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_FAkRGMOSmgEgasBRqXpdQdgDxDHM, put=__cordl_internal_set_FAkRGMOSmgEgasBRqXpdQdgDxDHM)) ::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc*  FAkRGMOSmgEgasBRqXpdQdgDxDHM;

/// @brief Field FBkFyLFzWhhXXDIiHYOKpeHjKpGm, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_FBkFyLFzWhhXXDIiHYOKpeHjKpGm, put=__cordl_internal_set_FBkFyLFzWhhXXDIiHYOKpeHjKpGm)) ::System::Action_1<bool>*  FBkFyLFzWhhXXDIiHYOKpeHjKpGm;

/// @brief Field HWjFRYeWFZteNUtSYifpofLrHgog, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HWjFRYeWFZteNUtSYifpofLrHgog, put=setStaticF_HWjFRYeWFZteNUtSYifpofLrHgog)) ::System::Func_3<::Rewired::Controller*,::System::Guid,bool>*  HWjFRYeWFZteNUtSYifpofLrHgog;

/// @brief Field IJSkWyjbAQBRKeQFvHUFfTqZgVTiA, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_IJSkWyjbAQBRKeQFvHUFfTqZgVTiA, put=__cordl_internal_set_IJSkWyjbAQBRKeQFvHUFfTqZgVTiA)) uint32_t  IJSkWyjbAQBRKeQFvHUFfTqZgVTiA;

/// @brief Field LQATtHWcwXWdYXQEeFnWSPAFIGCbA, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_LQATtHWcwXWdYXQEeFnWSPAFIGCbA, put=__cordl_internal_set_LQATtHWcwXWdYXQEeFnWSPAFIGCbA)) ::Rewired::Internal::Localization::ITryGetLocalizedName*  LQATtHWcwXWdYXQEeFnWSPAFIGCbA;

/// @brief Field MjmPNPzJHVKiNoxiAOoqflZNrMfA, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_MjmPNPzJHVKiNoxiAOoqflZNrMfA, put=__cordl_internal_set_MjmPNPzJHVKiNoxiAOoqflZNrMfA)) ::System::Collections::Generic::IList_1<::Rewired::Controller_CompoundElement*>*  MjmPNPzJHVKiNoxiAOoqflZNrMfA;

/// @brief Field NSYMnIhugYvueVeyjDnIAMunjnmA, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_NSYMnIhugYvueVeyjDnIAMunjnmA, put=__cordl_internal_set_NSYMnIhugYvueVeyjDnIAMunjnmA)) bool  NSYMnIhugYvueVeyjDnIAMunjnmA;

/// @brief Field NlNdOWcnqrIwPCzjFdrYCyNUacTsc, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_NlNdOWcnqrIwPCzjFdrYCyNUacTsc, put=__cordl_internal_set_NlNdOWcnqrIwPCzjFdrYCyNUacTsc)) uint32_t  NlNdOWcnqrIwPCzjFdrYCyNUacTsc;

 __declspec(property(get=TZmgqKeMlPOvdqlJhotKnEfaJYMqA)) bool  QlKpkvmniJcptHVflCvPsnUXVOLk;

/// @brief Field TdyQCOgGEsIPYjPgPlvnDhxdxBhFb, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_TdyQCOgGEsIPYjPgPlvnDhxdxBhFb, put=__cordl_internal_set_TdyQCOgGEsIPYjPgPlvnDhxdxBhFb)) ::Rewired::HardwareControllerMap_Game*  TdyQCOgGEsIPYjPgPlvnDhxdxBhFb;

 __declspec(property(get=get_Templates)) ::System::Collections::Generic::IList_1<::Rewired::IControllerTemplate*>*  Templates;

/// @brief Field VDBcakrBSUgHLINCgerlySFZUYRTA, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_VDBcakrBSUgHLINCgerlySFZUYRTA, put=__cordl_internal_set_VDBcakrBSUgHLINCgerlySFZUYRTA)) int32_t  VDBcakrBSUgHLINCgerlySFZUYRTA;

/// @brief Field _buttonCount, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonCount, put=__cordl_internal_set__buttonCount)) int32_t  _buttonCount;

/// @brief Field _hardwareIdentifier, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__hardwareIdentifier, put=__cordl_internal_set__hardwareIdentifier)) ::StringW  _hardwareIdentifier;

/// @brief Field _hardwareName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hardwareName, put=__cordl_internal_set__hardwareName)) ::StringW  _hardwareName;

/// @brief Field _isConnected, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isConnected, put=__cordl_internal_set__isConnected)) bool  _isConnected;

/// @brief Field _name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _tag, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__tag, put=__cordl_internal_set__tag)) ::StringW  _tag;

/// @brief Field _type, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::Rewired::ControllerType  _type;

/// @brief Field ayMAtSCZvsbYzvmtlpecnoWpCHFD, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ayMAtSCZvsbYzvmtlpecnoWpCHFD, put=__cordl_internal_set_ayMAtSCZvsbYzvmtlpecnoWpCHFD)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_CompoundElement*>*  ayMAtSCZvsbYzvmtlpecnoWpCHFD;

 __declspec(property(get=get_buttonCount)) int32_t  buttonCount;

/// @brief Field buttons, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttons, put=__cordl_internal_set_buttons)) ::ArrayW<::Rewired::Controller_Button*>  buttons;

/// @brief Field buttons_readOnly, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttons_readOnly, put=__cordl_internal_set_buttons_readOnly)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*  buttons_readOnly;

/// @brief Field cHcIdCyPbUFUPmqmVADKYldtCcZc, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_cHcIdCyPbUFUPmqmVADKYldtCcZc, put=__cordl_internal_set_cHcIdCyPbUFUPmqmVADKYldtCcZc)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::IControllerTemplate*>*  cHcIdCyPbUFUPmqmVADKYldtCcZc;

/// @brief Field cWphsXIffQnCHePhueABIqiKdqrq, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_cWphsXIffQnCHePhueABIqiKdqrq, put=__cordl_internal_set_cWphsXIffQnCHePhueABIqiKdqrq)) ::System::Guid  cWphsXIffQnCHePhueABIqiKdqrq;

 __declspec(property(get=get_deviceInstanceGuid)) ::System::Guid  deviceInstanceGuid;

/// @brief Field eiJJUxxHNHyrpyDGIBUhrltXmYcK, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_eiJJUxxHNHyrpyDGIBUhrltXmYcK, put=__cordl_internal_set_eiJJUxxHNHyrpyDGIBUhrltXmYcK)) uint32_t  eiJJUxxHNHyrpyDGIBUhrltXmYcK;

 __declspec(property(get=get_elementCount)) int32_t  elementCount;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_extension)) ::Rewired::Controller_Extension*  extension;

/// @brief Field fTvKJQEVbnZnDlPsKMNWyeZRORWj, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fTvKJQEVbnZnDlPsKMNWyeZRORWj, put=__cordl_internal_set_fTvKJQEVbnZnDlPsKMNWyeZRORWj)) ::System::Collections::Generic::IList_1<::Rewired::Controller_Element*>*  fTvKJQEVbnZnDlPsKMNWyeZRORWj;

/// @brief Field hCcUmwPeNTjOjHveDLViVFUwLkGWA, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hCcUmwPeNTjOjHveDLViVFUwLkGWA, put=__cordl_internal_set_hCcUmwPeNTjOjHveDLViVFUwLkGWA)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Element*>*  hCcUmwPeNTjOjHveDLViVFUwLkGWA;

 __declspec(property(get=get_hardwareIdentifier)) ::StringW  hardwareIdentifier;

 __declspec(property(get=get_hardwareName)) ::StringW  hardwareName;

 __declspec(property(get=get_hardwareTypeGuid)) ::System::Guid  hardwareTypeGuid;

/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

 __declspec(property(get=get_identifier)) ::Rewired::ControllerIdentifier  identifier;

/// @brief Field inputSource, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputSource, put=__cordl_internal_set_inputSource)) ::Rewired::InputSource  inputSource;

 __declspec(property(get=get_isConnected, put=WwFXvfJNWpmbYZnjYuzslMSdbhFF)) bool  isConnected;

 __declspec(property(get=get_mapTypeString)) ::StringW  mapTypeString;

 __declspec(property(get=get_name, put=sFFkrUovxTULOhCNNgpechRKhLuq)) ::StringW  name;

/// @brief Field noCCzJfDAFGZEosWChTvclXciZYfB, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_noCCzJfDAFGZEosWChTvclXciZYfB, put=__cordl_internal_set_noCCzJfDAFGZEosWChTvclXciZYfB)) ::Rewired::Internal::Localization::LocalizedString*  noCCzJfDAFGZEosWChTvclXciZYfB;

/// @brief Field rLTOrBCfMoLGHYIESnTBmfSSgptb, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rLTOrBCfMoLGHYIESnTBmfSSgptb, put=__cordl_internal_set_rLTOrBCfMoLGHYIESnTBmfSSgptb)) ::Rewired::ControllerDataUpdater*  rLTOrBCfMoLGHYIESnTBmfSSgptb;

/// @brief Field rdsPFWHvVWbJHsqeHgPQfPPYHuJIA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rdsPFWHvVWbJHsqeHgPQfPPYHuJIA, put=setStaticF_rdsPFWHvVWbJHsqeHgPQfPPYHuJIA)) ::System::Func_3<::Rewired::Controller*,::System::Type*,bool>*  rdsPFWHvVWbJHsqeHgPQfPPYHuJIA;

/// @brief Field tNQNDgjiBLSorApIrlMQjmundmjf, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tNQNDgjiBLSorApIrlMQjmundmjf, put=__cordl_internal_set_tNQNDgjiBLSorApIrlMQjmundmjf)) ::Rewired::Internal::Localization::DeviceLocalizationInfo*  tNQNDgjiBLSorApIrlMQjmundmjf;

 __declspec(property(get=get_tag, put=set_tag)) ::StringW  tag;

 __declspec(property(get=get_templateCount)) int32_t  templateCount;

 __declspec(property(get=get_type)) ::Rewired::ControllerType  type;

/// @brief Field vuRMxLCJIThOuCypYQINpaqifbbn, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_vuRMxLCJIThOuCypYQINpaqifbbn, put=__cordl_internal_set_vuRMxLCJIThOuCypYQINpaqifbbn)) ::Rewired::Controller_Extension*  vuRMxLCJIThOuCypYQINpaqifbbn;

/// @brief Field xziTCwRJYBTVzXZAviyuTXOxbvnJ, offset 0x70, size 0x30 
 __declspec(property(get=__cordl_internal_get_xziTCwRJYBTVzXZAviyuTXOxbvnJ, put=__cordl_internal_set_xziTCwRJYBTVzXZAviyuTXOxbvnJ)) ::Rewired::ControllerIdentifier  xziTCwRJYBTVzXZAviyuTXOxbvnJ;

/// @brief Method AOhRCpsfPLxXpENxzhFRHzCvTbhk, addr 0x181852220, size 0x240, virtual true, abstract: false, final false
inline void AOhRCpsfPLxXpENxzhFRHzCvTbhk(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Connected, addr 0x181537080, size 0x10, virtual true, abstract: false, final false
inline void Connected() ;

/// @brief Method Disconnected, addr 0x181852460, size 0x20, virtual true, abstract: false, final false
inline void Disconnected() ;

/// @brief Method EJOLwCUAuMFiGjaSTHstDeBzqmNFb, addr 0x181852480, size 0x250, virtual false, abstract: false, final false
inline bool EJOLwCUAuMFiGjaSTHstDeBzqmNFb(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<float_t>  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<bool>  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method GetAnyButton, addr 0x181852ab0, size 0xd0, virtual true, abstract: false, final false
inline bool GetAnyButton() ;

/// @brief Method GetAnyButtonChanged, addr 0x1818526d0, size 0x170, virtual true, abstract: false, final false
inline bool GetAnyButtonChanged() ;

/// @brief Method GetAnyButtonDown, addr 0x181852840, size 0xd0, virtual true, abstract: false, final false
inline bool GetAnyButtonDown() ;

/// @brief Method GetAnyButtonPrev, addr 0x181852910, size 0xd0, virtual true, abstract: false, final false
inline bool GetAnyButtonPrev() ;

/// @brief Method GetAnyButtonUp, addr 0x1818529e0, size 0xd0, virtual true, abstract: false, final false
inline bool GetAnyButtonUp() ;

/// @brief Method GetButton, addr 0x181853c20, size 0xa0, virtual true, abstract: false, final false
inline bool GetButton(int32_t  index) ;

/// @brief Method GetButtonById, addr 0x181852b80, size 0xb0, virtual true, abstract: false, final false
inline bool GetButtonById(int32_t  elementIdentifierId) ;

/// @brief Method GetButtonChanged, addr 0x181852c30, size 0xd0, virtual true, abstract: false, final false
inline bool GetButtonChanged(int32_t  index) ;

/// @brief Method GetButtonDoublePressDown, addr 0x181852f20, size 0x90, virtual true, abstract: false, final false
inline bool GetButtonDoublePressDown(int32_t  index) ;

/// @brief Method GetButtonDoublePressDown, addr 0x181852e70, size 0xb0, virtual true, abstract: false, final false
inline bool GetButtonDoublePressDown(int32_t  index, float_t  speed) ;

/// @brief Method GetButtonDoublePressDownById, addr 0x181852dd0, size 0xa0, virtual true, abstract: false, final false
inline bool GetButtonDoublePressDownById(int32_t  elementIdentifierId) ;

/// @brief Method GetButtonDoublePressDownById, addr 0x181852d00, size 0xd0, virtual true, abstract: false, final false
inline bool GetButtonDoublePressDownById(int32_t  elementIdentifierId, float_t  speed) ;

/// @brief Method GetButtonDoublePressHold, addr 0x1818531d0, size 0x90, virtual true, abstract: false, final false
inline bool GetButtonDoublePressHold(int32_t  index) ;

/// @brief Method GetButtonDoublePressHold, addr 0x181853120, size 0xb0, virtual true, abstract: false, final false
inline bool GetButtonDoublePressHold(int32_t  index, float_t  speed) ;

/// @brief Method GetButtonDoublePressHoldById, addr 0x181852fb0, size 0xa0, virtual true, abstract: false, final false
inline bool GetButtonDoublePressHoldById(int32_t  elementIdentifierId) ;

/// @brief Method GetButtonDoublePressHoldById, addr 0x181853050, size 0xd0, virtual true, abstract: false, final false
inline bool GetButtonDoublePressHoldById(int32_t  elementIdentifierId, float_t  speed) ;

/// @brief Method GetButtonDown, addr 0x181853310, size 0xa0, virtual true, abstract: false, final false
inline bool GetButtonDown(int32_t  index) ;

/// @brief Method GetButtonDownById, addr 0x181853260, size 0xb0, virtual true, abstract: false, final false
inline bool GetButtonDownById(int32_t  elementIdentifierId) ;

/// @brief Method GetButtonIndexById, addr 0x1818533b0, size 0x90, virtual false, abstract: false, final false
inline int32_t GetButtonIndexById(int32_t  elementIdentifierId) ;

/// @brief Method GetButtonLastTimePressed, addr 0x1818534f0, size 0xa0, virtual true, abstract: false, final false
inline double_t GetButtonLastTimePressed(int32_t  index) ;

/// @brief Method GetButtonLastTimePressedById, addr 0x181853440, size 0xb0, virtual true, abstract: false, final false
inline double_t GetButtonLastTimePressedById(int32_t  elementIdentifierId) ;

/// @brief Method GetButtonLastTimeUnpressed, addr 0x181853640, size 0xa0, virtual true, abstract: false, final false
inline double_t GetButtonLastTimeUnpressed(int32_t  index) ;

/// @brief Method GetButtonLastTimeUnpressedById, addr 0x181853590, size 0xb0, virtual true, abstract: false, final false
inline double_t GetButtonLastTimeUnpressedById(int32_t  elementIdentifierId) ;

/// @brief Method GetButtonPrev, addr 0x181853790, size 0xa0, virtual true, abstract: false, final false
inline bool GetButtonPrev(int32_t  index) ;

/// @brief Method GetButtonPrevById, addr 0x1818536e0, size 0xb0, virtual true, abstract: false, final false
inline bool GetButtonPrevById(int32_t  elementIdentifierId) ;

/// @brief Method GetButtonTimePressed, addr 0x1818538e0, size 0xa0, virtual true, abstract: false, final false
inline double_t GetButtonTimePressed(int32_t  index) ;

/// @brief Method GetButtonTimePressedById, addr 0x181853830, size 0xb0, virtual true, abstract: false, final false
inline double_t GetButtonTimePressedById(int32_t  elementIdentifierId) ;

/// @brief Method GetButtonTimeUnpressed, addr 0x181853a30, size 0xa0, virtual true, abstract: false, final false
inline double_t GetButtonTimeUnpressed(int32_t  index) ;

/// @brief Method GetButtonTimeUnpressedById, addr 0x181853980, size 0xb0, virtual true, abstract: false, final false
inline double_t GetButtonTimeUnpressedById(int32_t  elementIdentifierId) ;

/// @brief Method GetButtonUp, addr 0x181853b80, size 0xa0, virtual true, abstract: false, final false
inline bool GetButtonUp(int32_t  index) ;

/// @brief Method GetButtonUpById, addr 0x181853ad0, size 0xb0, virtual true, abstract: false, final false
inline bool GetButtonUpById(int32_t  elementIdentifierId) ;

/// @brief Method GetCompoundElementById, addr 0x181853cc0, size 0x130, virtual true, abstract: false, final false
inline ::Rewired::Controller_CompoundElement* GetCompoundElementById(int32_t  elementIdentifierId) ;

/// @brief Method GetCompundElementById, addr 0x181853df0, size 0x20, virtual true, abstract: false, final false
inline ::Rewired::Controller_CompoundElement* GetCompundElementById(int32_t  elementIdentifierId) ;

/// @brief Method GetElementById, addr 0x181853e10, size 0xa0, virtual true, abstract: false, final false
inline ::Rewired::Controller_Element* GetElementById(int32_t  elementIdentifierId) ;

/// @brief Method GetElementIdentifierById, addr 0x181853eb0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* GetElementIdentifierById(int32_t  elementIdentifierId) ;

/// @brief Method GetExtension, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetExtension() ;

/// @brief Method GetLastTimeActive, addr 0x18184f7b0, size 0x70, virtual true, abstract: false, final false
inline double_t GetLastTimeActive() ;

/// @brief Method GetLastTimeActive, addr 0x181853f40, size 0x110, virtual true, abstract: false, final false
inline double_t GetLastTimeActive(bool  useRawValues) ;

/// @brief Method GetLastTimeAnyButtonChanged, addr 0x181854050, size 0x190, virtual false, abstract: false, final false
inline double_t GetLastTimeAnyButtonChanged() ;

/// @brief Method GetLastTimeAnyButtonPressed, addr 0x1818541e0, size 0xf0, virtual false, abstract: false, final false
inline double_t GetLastTimeAnyButtonPressed() ;

/// @brief Method GetLastTimeAnyElementChanged, addr 0x1818544c0, size 0x70, virtual true, abstract: false, final false
inline double_t GetLastTimeAnyElementChanged() ;

/// @brief Method GetLastTimeAnyElementChanged, addr 0x1818542d0, size 0x1f0, virtual true, abstract: false, final false
inline double_t GetLastTimeAnyElementChanged(bool  useRawValues) ;

/// @brief Method GetTemplate, addr 0x181854530, size 0x100, virtual false, abstract: false, final false
inline ::Rewired::IControllerTemplate* GetTemplate(::System::Type*  type) ;

/// @brief Method GetTemplate, addr 0x181854630, size 0x1c0, virtual false, abstract: false, final false
inline ::Rewired::IControllerTemplate* GetTemplate(::System::Guid  typeGuid) ;

/// @brief Method GetTemplate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetTemplate() ;

/// @brief Method HTpkxUiuLbFEPOeDajMLsXZjEnZFA, addr 0x1818547f0, size 0xa0, virtual false, abstract: false, final false
inline void HTpkxUiuLbFEPOeDajMLsXZjEnZFA(::System::Action_1<bool>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method HijLfJDrByOTkXQMlZUXpbbvGGnC, addr 0x181854890, size 0x70, virtual true, abstract: false, final false
inline bool HijLfJDrByOTkXQMlZUXpbbvGGnC(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method IkkqpwfGeGUxQjGKFMRgsqBgVys, addr 0x181854900, size 0x20, virtual false, abstract: false, final false
inline void IkkqpwfGeGUxQjGKFMRgsqBgVys(::Rewired::Controller_Element*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ImplementsTemplate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool ImplementsTemplate() ;

/// @brief Method ImplementsTemplate, addr 0x181854920, size 0x110, virtual false, abstract: false, final false
inline bool ImplementsTemplate(::System::Type*  type) ;

/// @brief Method ImplementsTemplate, addr 0x181854a30, size 0x1b0, virtual false, abstract: false, final false
inline bool ImplementsTemplate(::System::Guid  typeGuid) ;

static inline ::Rewired::Controller* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_5, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_11, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_12) ;

/// @brief Method PollForAllButtons, addr 0x181854c30, size 0x50, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollForAllButtons() ;

/// @brief Method PollForAllButtonsDown, addr 0x181854be0, size 0x50, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollForAllButtonsDown() ;

/// @brief Method PollForAllElements, addr 0x18172ae00, size 0x20, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollForAllElements() ;

/// @brief Method PollForAllElementsDown, addr 0x181852050, size 0x20, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollForAllElementsDown() ;

/// @brief Method PollForFirstButton, addr 0x181854e90, size 0x210, virtual true, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollForFirstButton() ;

/// @brief Method PollForFirstButtonDown, addr 0x181854c80, size 0x210, virtual true, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollForFirstButtonDown() ;

/// @brief Method PollForFirstElement, addr 0x1818550f0, size 0x50, virtual true, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollForFirstElement() ;

/// @brief Method PollForFirstElementDown, addr 0x1818550a0, size 0x50, virtual true, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollForFirstElementDown() ;

/// @brief Method QbtkAMPryTfqemxDoFcIrciYcnFo, addr 0x181855140, size 0x20, virtual true, abstract: false, final false
inline void QbtkAMPryTfqemxDoFcIrciYcnFo(::Rewired::ControllerMap*  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method RRiBHmWvkYxhauXbycdsbIMPyYHc, addr 0x181855160, size 0xe0, virtual false, abstract: false, final false
inline void RRiBHmWvkYxhauXbycdsbIMPyYHc(::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RcicIfBXoTYnaRbBhKNbuJdQGbBXA, addr 0x181855240, size 0xc0, virtual false, abstract: false, final false
inline void RcicIfBXoTYnaRbBhKNbuJdQGbBXA(::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RjUaIBBnbtKXLfPPbOuHBhBfGnCVA, addr 0x1803370a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Internal::Localization::ITryGetLocalizedName* RjUaIBBnbtKXLfPPbOuHBhBfGnCVA() ;

/// @brief Method TZmgqKeMlPOvdqlJhotKnEfaJYMqA, addr 0x181855300, size 0x50, virtual false, abstract: false, final false
inline bool TZmgqKeMlPOvdqlJhotKnEfaJYMqA() ;

/// @brief Method TwLAIXrHKLkJKtqLxLinrgATAEudA, addr 0x181855350, size 0x80, virtual false, abstract: false, final false
inline void TwLAIXrHKLkJKtqLxLinrgATAEudA(::ArrayW<::Rewired::IControllerTemplate*>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method UpdatePollingFrameTracking, addr 0x1818553d0, size 0xd0, virtual false, abstract: false, final false
inline void UpdatePollingFrameTracking() ;

/// @brief Method WUADbxKAwZeoChfOMDpYQKluwbMv, addr 0x1818554a0, size 0x150, virtual true, abstract: false, final false
inline void WUADbxKAwZeoChfOMDpYQKluwbMv(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method WaJLuWZajakWjRgGFxqElNWyyGVW, addr 0x1818555f0, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Func_3<::Rewired::Controller*,::System::Guid,bool>* WaJLuWZajakWjRgGFxqElNWyyGVW() ;

/// @brief Method WaQFtcPbUwGKFgcZNtkhQpxTrTMb, addr 0x1818556d0, size 0xc0, virtual false, abstract: false, final false
inline bool WaQFtcPbUwGKFgcZNtkhQpxTrTMb(int32_t  _cordl_fixed_empty_name_whitespace, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method WwFXvfJNWpmbYZnjYuzslMSdbhFF, addr 0x181855790, size 0xa0, virtual false, abstract: false, final false
inline void WwFXvfJNWpmbYZnjYuzslMSdbhFF(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method YpudbJPSWSFBDHhKIvtTtLCHjAud, addr 0x181855830, size 0x10, virtual false, abstract: false, final false
inline void YpudbJPSWSFBDHhKIvtTtLCHjAud() ;

constexpr ::ArrayW<::Rewired::IControllerTemplate*> const& __cordl_internal_get_EhdelWqHbOHmohPNCqFpFiRZRbxxA() const;

constexpr ::ArrayW<::Rewired::IControllerTemplate*>& __cordl_internal_get_EhdelWqHbOHmohPNCqFpFiRZRbxxA() ;

constexpr ::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc* const& __cordl_internal_get_FAkRGMOSmgEgasBRqXpdQdgDxDHM() const;

constexpr ::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc*& __cordl_internal_get_FAkRGMOSmgEgasBRqXpdQdgDxDHM() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_FBkFyLFzWhhXXDIiHYOKpeHjKpGm() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_FBkFyLFzWhhXXDIiHYOKpeHjKpGm() ;

constexpr uint32_t const& __cordl_internal_get_IJSkWyjbAQBRKeQFvHUFfTqZgVTiA() const;

constexpr uint32_t& __cordl_internal_get_IJSkWyjbAQBRKeQFvHUFfTqZgVTiA() ;

constexpr ::Rewired::Internal::Localization::ITryGetLocalizedName* const& __cordl_internal_get_LQATtHWcwXWdYXQEeFnWSPAFIGCbA() const;

constexpr ::Rewired::Internal::Localization::ITryGetLocalizedName*& __cordl_internal_get_LQATtHWcwXWdYXQEeFnWSPAFIGCbA() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Controller_CompoundElement*>* const& __cordl_internal_get_MjmPNPzJHVKiNoxiAOoqflZNrMfA() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Controller_CompoundElement*>*& __cordl_internal_get_MjmPNPzJHVKiNoxiAOoqflZNrMfA() ;

constexpr bool const& __cordl_internal_get_NSYMnIhugYvueVeyjDnIAMunjnmA() const;

constexpr bool& __cordl_internal_get_NSYMnIhugYvueVeyjDnIAMunjnmA() ;

constexpr uint32_t const& __cordl_internal_get_NlNdOWcnqrIwPCzjFdrYCyNUacTsc() const;

constexpr uint32_t& __cordl_internal_get_NlNdOWcnqrIwPCzjFdrYCyNUacTsc() ;

constexpr ::Rewired::HardwareControllerMap_Game* const& __cordl_internal_get_TdyQCOgGEsIPYjPgPlvnDhxdxBhFb() const;

constexpr ::Rewired::HardwareControllerMap_Game*& __cordl_internal_get_TdyQCOgGEsIPYjPgPlvnDhxdxBhFb() ;

constexpr int32_t const& __cordl_internal_get_VDBcakrBSUgHLINCgerlySFZUYRTA() const;

constexpr int32_t& __cordl_internal_get_VDBcakrBSUgHLINCgerlySFZUYRTA() ;

constexpr int32_t const& __cordl_internal_get__buttonCount() const;

constexpr int32_t& __cordl_internal_get__buttonCount() ;

constexpr ::StringW const& __cordl_internal_get__hardwareIdentifier() const;

constexpr ::StringW& __cordl_internal_get__hardwareIdentifier() ;

constexpr ::StringW const& __cordl_internal_get__hardwareName() const;

constexpr ::StringW& __cordl_internal_get__hardwareName() ;

constexpr bool const& __cordl_internal_get__isConnected() const;

constexpr bool& __cordl_internal_get__isConnected() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::StringW const& __cordl_internal_get__tag() const;

constexpr ::StringW& __cordl_internal_get__tag() ;

constexpr ::Rewired::ControllerType const& __cordl_internal_get__type() const;

constexpr ::Rewired::ControllerType& __cordl_internal_get__type() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_CompoundElement*>* const& __cordl_internal_get_ayMAtSCZvsbYzvmtlpecnoWpCHFD() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_CompoundElement*>*& __cordl_internal_get_ayMAtSCZvsbYzvmtlpecnoWpCHFD() ;

constexpr ::ArrayW<::Rewired::Controller_Button*> const& __cordl_internal_get_buttons() const;

constexpr ::ArrayW<::Rewired::Controller_Button*>& __cordl_internal_get_buttons() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>* const& __cordl_internal_get_buttons_readOnly() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*& __cordl_internal_get_buttons_readOnly() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::IControllerTemplate*>* const& __cordl_internal_get_cHcIdCyPbUFUPmqmVADKYldtCcZc() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::IControllerTemplate*>*& __cordl_internal_get_cHcIdCyPbUFUPmqmVADKYldtCcZc() ;

constexpr ::System::Guid const& __cordl_internal_get_cWphsXIffQnCHePhueABIqiKdqrq() const;

constexpr ::System::Guid& __cordl_internal_get_cWphsXIffQnCHePhueABIqiKdqrq() ;

constexpr uint32_t const& __cordl_internal_get_eiJJUxxHNHyrpyDGIBUhrltXmYcK() const;

constexpr uint32_t& __cordl_internal_get_eiJJUxxHNHyrpyDGIBUhrltXmYcK() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Controller_Element*>* const& __cordl_internal_get_fTvKJQEVbnZnDlPsKMNWyeZRORWj() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Controller_Element*>*& __cordl_internal_get_fTvKJQEVbnZnDlPsKMNWyeZRORWj() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Element*>* const& __cordl_internal_get_hCcUmwPeNTjOjHveDLViVFUwLkGWA() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Element*>*& __cordl_internal_get_hCcUmwPeNTjOjHveDLViVFUwLkGWA() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr ::Rewired::InputSource const& __cordl_internal_get_inputSource() const;

constexpr ::Rewired::InputSource& __cordl_internal_get_inputSource() ;

constexpr ::Rewired::Internal::Localization::LocalizedString* const& __cordl_internal_get_noCCzJfDAFGZEosWChTvclXciZYfB() const;

constexpr ::Rewired::Internal::Localization::LocalizedString*& __cordl_internal_get_noCCzJfDAFGZEosWChTvclXciZYfB() ;

constexpr ::Rewired::ControllerDataUpdater* const& __cordl_internal_get_rLTOrBCfMoLGHYIESnTBmfSSgptb() const;

constexpr ::Rewired::ControllerDataUpdater*& __cordl_internal_get_rLTOrBCfMoLGHYIESnTBmfSSgptb() ;

constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo* const& __cordl_internal_get_tNQNDgjiBLSorApIrlMQjmundmjf() const;

constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo*& __cordl_internal_get_tNQNDgjiBLSorApIrlMQjmundmjf() ;

constexpr ::Rewired::Controller_Extension* const& __cordl_internal_get_vuRMxLCJIThOuCypYQINpaqifbbn() const;

constexpr ::Rewired::Controller_Extension*& __cordl_internal_get_vuRMxLCJIThOuCypYQINpaqifbbn() ;

constexpr ::Rewired::ControllerIdentifier const& __cordl_internal_get_xziTCwRJYBTVzXZAviyuTXOxbvnJ() const;

constexpr ::Rewired::ControllerIdentifier& __cordl_internal_get_xziTCwRJYBTVzXZAviyuTXOxbvnJ() ;

constexpr void __cordl_internal_set_EhdelWqHbOHmohPNCqFpFiRZRbxxA(::ArrayW<::Rewired::IControllerTemplate*>  value) ;

constexpr void __cordl_internal_set_FAkRGMOSmgEgasBRqXpdQdgDxDHM(::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc*  value) ;

constexpr void __cordl_internal_set_FBkFyLFzWhhXXDIiHYOKpeHjKpGm(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_IJSkWyjbAQBRKeQFvHUFfTqZgVTiA(uint32_t  value) ;

constexpr void __cordl_internal_set_LQATtHWcwXWdYXQEeFnWSPAFIGCbA(::Rewired::Internal::Localization::ITryGetLocalizedName*  value) ;

constexpr void __cordl_internal_set_MjmPNPzJHVKiNoxiAOoqflZNrMfA(::System::Collections::Generic::IList_1<::Rewired::Controller_CompoundElement*>*  value) ;

constexpr void __cordl_internal_set_NSYMnIhugYvueVeyjDnIAMunjnmA(bool  value) ;

constexpr void __cordl_internal_set_NlNdOWcnqrIwPCzjFdrYCyNUacTsc(uint32_t  value) ;

constexpr void __cordl_internal_set_TdyQCOgGEsIPYjPgPlvnDhxdxBhFb(::Rewired::HardwareControllerMap_Game*  value) ;

constexpr void __cordl_internal_set_VDBcakrBSUgHLINCgerlySFZUYRTA(int32_t  value) ;

constexpr void __cordl_internal_set__buttonCount(int32_t  value) ;

constexpr void __cordl_internal_set__hardwareIdentifier(::StringW  value) ;

constexpr void __cordl_internal_set__hardwareName(::StringW  value) ;

constexpr void __cordl_internal_set__isConnected(bool  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__tag(::StringW  value) ;

constexpr void __cordl_internal_set__type(::Rewired::ControllerType  value) ;

constexpr void __cordl_internal_set_ayMAtSCZvsbYzvmtlpecnoWpCHFD(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_CompoundElement*>*  value) ;

constexpr void __cordl_internal_set_buttons(::ArrayW<::Rewired::Controller_Button*>  value) ;

constexpr void __cordl_internal_set_buttons_readOnly(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*  value) ;

constexpr void __cordl_internal_set_cHcIdCyPbUFUPmqmVADKYldtCcZc(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::IControllerTemplate*>*  value) ;

constexpr void __cordl_internal_set_cWphsXIffQnCHePhueABIqiKdqrq(::System::Guid  value) ;

constexpr void __cordl_internal_set_eiJJUxxHNHyrpyDGIBUhrltXmYcK(uint32_t  value) ;

constexpr void __cordl_internal_set_fTvKJQEVbnZnDlPsKMNWyeZRORWj(::System::Collections::Generic::IList_1<::Rewired::Controller_Element*>*  value) ;

constexpr void __cordl_internal_set_hCcUmwPeNTjOjHveDLViVFUwLkGWA(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Element*>*  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_inputSource(::Rewired::InputSource  value) ;

constexpr void __cordl_internal_set_noCCzJfDAFGZEosWChTvclXciZYfB(::Rewired::Internal::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set_rLTOrBCfMoLGHYIESnTBmfSSgptb(::Rewired::ControllerDataUpdater*  value) ;

constexpr void __cordl_internal_set_tNQNDgjiBLSorApIrlMQjmundmjf(::Rewired::Internal::Localization::DeviceLocalizationInfo*  value) ;

constexpr void __cordl_internal_set_vuRMxLCJIThOuCypYQINpaqifbbn(::Rewired::Controller_Extension*  value) ;

constexpr void __cordl_internal_set_xziTCwRJYBTVzXZAviyuTXOxbvnJ(::Rewired::ControllerIdentifier  value) ;

/// @brief Method .ctor, addr 0x181855840, size 0x6a0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_5, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_8, ::ArrayW<::Rewired::Data::Mapping::HardwareButtonInfo*>  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_11, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_12) ;

/// @brief Method apCXFIXECQYpBSnlYVLuRUUSNtMO, addr 0x181855ee0, size 0xa0, virtual true, abstract: false, final false
inline void apCXFIXECQYpBSnlYVLuRUUSNtMO() ;

/// @brief Method evtXKVBcoYIsHAeKgmIeanFeuDeY, addr 0x181855f80, size 0xc0, virtual false, abstract: false, final false
inline bool evtXKVBcoYIsHAeKgmIeanFeuDeY(int32_t  _cordl_fixed_empty_name_whitespace, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method exHpXNwrNfqrNAzLpbdygKNtkvoA, addr 0x181856040, size 0xc0, virtual true, abstract: false, final false
inline ::Rewired::ButtonStateFlags exHpXNwrNfqrNAzLpbdygKNtkvoA(int32_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::System::Func_3<::Rewired::Controller*,::System::Guid,bool>* getStaticF_HWjFRYeWFZteNUtSYifpofLrHgog() ;

static inline ::System::Func_3<::Rewired::Controller*,::System::Type*,bool>* getStaticF_rdsPFWHvVWbJHsqeHgPQfPPYHuJIA() ;

/// @brief Method get_ButtonElementIdentifiers, addr 0x181856100, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* get_ButtonElementIdentifiers() ;

/// @brief Method get_Buttons, addr 0x181856180, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_Button*>* get_Buttons() ;

/// @brief Method get_CompoundElements, addr 0x1818561f0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_CompoundElement*>* get_CompoundElements() ;

/// @brief Method get_ElementIdentifiers, addr 0x181856260, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* get_ElementIdentifiers() ;

/// @brief Method get_Elements, addr 0x1818562e0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Controller_Element*>* get_Elements() ;

/// @brief Method get_Templates, addr 0x181856350, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::IControllerTemplate*>* get_Templates() ;

/// @brief Method get_buttonCount, addr 0x1818563c0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_buttonCount() ;

/// @brief Method get_deviceInstanceGuid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Guid get_deviceInstanceGuid() ;

/// @brief Method get_elementCount, addr 0x181856420, size 0x80, virtual false, abstract: false, final false
inline int32_t get_elementCount() ;

/// @brief Method get_enabled, addr 0x1818564a0, size 0x60, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_extension, addr 0x181856500, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Controller_Extension* get_extension() ;

/// @brief Method get_hardwareIdentifier, addr 0x181856560, size 0x70, virtual false, abstract: false, final false
inline ::StringW get_hardwareIdentifier() ;

/// @brief Method get_hardwareName, addr 0x1818565d0, size 0x70, virtual false, abstract: false, final false
inline ::StringW get_hardwareName() ;

/// @brief Method get_hardwareTypeGuid, addr 0x181856640, size 0x90, virtual false, abstract: false, final false
inline ::System::Guid get_hardwareTypeGuid() ;

/// @brief Method get_identifier, addr 0x1818566d0, size 0x30, virtual false, abstract: false, final false
inline ::Rewired::ControllerIdentifier get_identifier() ;

/// @brief Method get_isConnected, addr 0x181856700, size 0x60, virtual false, abstract: false, final false
inline bool get_isConnected() ;

/// @brief Method get_mapTypeString, addr 0x181856760, size 0x50, virtual false, abstract: false, final false
inline ::StringW get_mapTypeString() ;

/// @brief Method get_name, addr 0x1818567b0, size 0x210, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_tag, addr 0x1818569c0, size 0x70, virtual false, abstract: false, final false
inline ::StringW get_tag() ;

/// @brief Method get_templateCount, addr 0x181856a30, size 0x70, virtual false, abstract: false, final false
inline int32_t get_templateCount() ;

/// @brief Method get_type, addr 0x181856aa0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_type() ;

/// @brief Method gmKUiiaRVyhhJHHqJAsLUyaSMTfO, addr 0x180337130, size 0x20, virtual false, abstract: false, final false
inline void gmKUiiaRVyhhJHHqJAsLUyaSMTfO(::Rewired::Internal::Localization::ITryGetLocalizedName*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method jMhejqkVCFSQZEPAHJgWfSlpDMnVB, addr 0x181856b00, size 0xa0, virtual false, abstract: false, final false
inline void jMhejqkVCFSQZEPAHJgWfSlpDMnVB(::System::Action_1<bool>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method jXVbOTZKziyLTMaCTyFGNmIanqUc, addr 0x181856ba0, size 0x20, virtual false, abstract: false, final false
inline void jXVbOTZKziyLTMaCTyFGNmIanqUc(::Rewired::Controller_CompoundElement*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method jxivVgYpKYsUsBuonCeDtQNGfgFFA, addr 0x181856bc0, size 0x60, virtual true, abstract: false, final false
inline void jxivVgYpKYsUsBuonCeDtQNGfgFFA() ;

/// @brief Method kPCdhrgQifXTuZhdhKjUbwWOchlT, addr 0x181856c20, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Func_3<::Rewired::Controller*,::System::Type*,bool>* kPCdhrgQifXTuZhdhKjUbwWOchlT() ;

/// @brief Method oisGttPVMBiQEIDNdamDIAVRhLfhA, addr 0x181856d10, size 0x90, virtual false, abstract: false, final false
inline bool oisGttPVMBiQEIDNdamDIAVRhLfhA(::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, ::by_ref<float_t>  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method sFFkrUovxTULOhCNNgpechRKhLuq, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void sFFkrUovxTULOhCNNgpechRKhLuq(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method sFvyBFaXbdCETylFevnoVNktxMjF, addr 0x181856da0, size 0x60, virtual true, abstract: false, final false
inline void sFvyBFaXbdCETylFevnoVNktxMjF(bool  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF_HWjFRYeWFZteNUtSYifpofLrHgog(::System::Func_3<::Rewired::Controller*,::System::Guid,bool>*  value) ;

static inline void setStaticF_rdsPFWHvVWbJHsqeHgPQfPPYHuJIA(::System::Func_3<::Rewired::Controller*,::System::Type*,bool>*  value) ;

/// @brief Method set_enabled, addr 0x181856e00, size 0x20, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_tag, addr 0x181856e20, size 0x80, virtual false, abstract: false, final false
inline void set_tag(::StringW  value) ;

/// @brief Method tNJpngcZQmQSzqrnrlnksfPUjTqN, addr 0x181856ea0, size 0x20, virtual true, abstract: false, final false
inline ::System::Guid tNJpngcZQmQSzqrnrlnksfPUjTqN() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Controller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Controller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Controller(Controller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Controller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Controller(Controller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1832};

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field _tag, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____tag;

/// @brief Field _name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field tNQNDgjiBLSorApIrlMQjmundmjf, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Internal::Localization::DeviceLocalizationInfo*  ___tNQNDgjiBLSorApIrlMQjmundmjf;

/// @brief Field _hardwareName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____hardwareName;

/// @brief Field _type, offset: 0x38, size: 0x4, def value: None
 ::Rewired::ControllerType  ____type;

/// @brief Field cWphsXIffQnCHePhueABIqiKdqrq, offset: 0x3c, size: 0x10, def value: None
 ::System::Guid  ___cWphsXIffQnCHePhueABIqiKdqrq;

/// @brief Field _hardwareIdentifier, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____hardwareIdentifier;

/// @brief Field _isConnected, offset: 0x58, size: 0x1, def value: None
 bool  ____isConnected;

/// @brief Field vuRMxLCJIThOuCypYQINpaqifbbn, offset: 0x60, size: 0x8, def value: None
 ::Rewired::Controller_Extension*  ___vuRMxLCJIThOuCypYQINpaqifbbn;

/// @brief Field NSYMnIhugYvueVeyjDnIAMunjnmA, offset: 0x68, size: 0x1, def value: None
 bool  ___NSYMnIhugYvueVeyjDnIAMunjnmA;

/// @brief Field xziTCwRJYBTVzXZAviyuTXOxbvnJ, offset: 0x70, size: 0x30, def value: None
 ::Rewired::ControllerIdentifier  ___xziTCwRJYBTVzXZAviyuTXOxbvnJ;

/// @brief Field VDBcakrBSUgHLINCgerlySFZUYRTA, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___VDBcakrBSUgHLINCgerlySFZUYRTA;

/// @brief Field _buttonCount, offset: 0xa4, size: 0x4, def value: None
 int32_t  ____buttonCount;

/// @brief Field buttons, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::Rewired::Controller_Button*>  ___buttons;

/// @brief Field buttons_readOnly, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Button*>*  ___buttons_readOnly;

/// @brief Field fTvKJQEVbnZnDlPsKMNWyeZRORWj, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Controller_Element*>*  ___fTvKJQEVbnZnDlPsKMNWyeZRORWj;

/// @brief Field hCcUmwPeNTjOjHveDLViVFUwLkGWA, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_Element*>*  ___hCcUmwPeNTjOjHveDLViVFUwLkGWA;

/// @brief Field MjmPNPzJHVKiNoxiAOoqflZNrMfA, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Controller_CompoundElement*>*  ___MjmPNPzJHVKiNoxiAOoqflZNrMfA;

/// @brief Field ayMAtSCZvsbYzvmtlpecnoWpCHFD, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::Controller_CompoundElement*>*  ___ayMAtSCZvsbYzvmtlpecnoWpCHFD;

/// @brief Field inputSource, offset: 0xd8, size: 0x4, def value: None
 ::Rewired::InputSource  ___inputSource;

/// @brief Field rLTOrBCfMoLGHYIESnTBmfSSgptb, offset: 0xe0, size: 0x8, def value: None
 ::Rewired::ControllerDataUpdater*  ___rLTOrBCfMoLGHYIESnTBmfSSgptb;

/// @brief Field TdyQCOgGEsIPYjPgPlvnDhxdxBhFb, offset: 0xe8, size: 0x8, def value: None
 ::Rewired::HardwareControllerMap_Game*  ___TdyQCOgGEsIPYjPgPlvnDhxdxBhFb;

/// @brief Field NlNdOWcnqrIwPCzjFdrYCyNUacTsc, offset: 0xf0, size: 0x4, def value: None
 uint32_t  ___NlNdOWcnqrIwPCzjFdrYCyNUacTsc;

/// @brief Field eiJJUxxHNHyrpyDGIBUhrltXmYcK, offset: 0xf4, size: 0x4, def value: None
 uint32_t  ___eiJJUxxHNHyrpyDGIBUhrltXmYcK;

/// @brief Field IJSkWyjbAQBRKeQFvHUFfTqZgVTiA, offset: 0xf8, size: 0x4, def value: None
 uint32_t  ___IJSkWyjbAQBRKeQFvHUFfTqZgVTiA;

/// @brief Field LQATtHWcwXWdYXQEeFnWSPAFIGCbA, offset: 0x100, size: 0x8, def value: None
 ::Rewired::Internal::Localization::ITryGetLocalizedName*  ___LQATtHWcwXWdYXQEeFnWSPAFIGCbA;

/// @brief Field noCCzJfDAFGZEosWChTvclXciZYfB, offset: 0x108, size: 0x8, def value: None
 ::Rewired::Internal::Localization::LocalizedString*  ___noCCzJfDAFGZEosWChTvclXciZYfB;

/// @brief Field FAkRGMOSmgEgasBRqXpdQdgDxDHM, offset: 0x110, size: 0x8, def value: None
 ::GlobalNamespace::mgEoYhWDNSuilPYVDQosKwaMZrnc*  ___FAkRGMOSmgEgasBRqXpdQdgDxDHM;

/// @brief Field FBkFyLFzWhhXXDIiHYOKpeHjKpGm, offset: 0x118, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___FBkFyLFzWhhXXDIiHYOKpeHjKpGm;

/// @brief Field EhdelWqHbOHmohPNCqFpFiRZRbxxA, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<::Rewired::IControllerTemplate*>  ___EhdelWqHbOHmohPNCqFpFiRZRbxxA;

/// @brief Field cHcIdCyPbUFUPmqmVADKYldtCcZc, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::IControllerTemplate*>*  ___cHcIdCyPbUFUPmqmVADKYldtCcZc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Controller, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ____tag) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ____name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___tNQNDgjiBLSorApIrlMQjmundmjf) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ____hardwareName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ____type) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___cWphsXIffQnCHePhueABIqiKdqrq) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ____hardwareIdentifier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ____isConnected) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___vuRMxLCJIThOuCypYQINpaqifbbn) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___NSYMnIhugYvueVeyjDnIAMunjnmA) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___xziTCwRJYBTVzXZAviyuTXOxbvnJ) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___VDBcakrBSUgHLINCgerlySFZUYRTA) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ____buttonCount) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___buttons) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___buttons_readOnly) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___fTvKJQEVbnZnDlPsKMNWyeZRORWj) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___hCcUmwPeNTjOjHveDLViVFUwLkGWA) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___MjmPNPzJHVKiNoxiAOoqflZNrMfA) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___ayMAtSCZvsbYzvmtlpecnoWpCHFD) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___inputSource) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___rLTOrBCfMoLGHYIESnTBmfSSgptb) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___TdyQCOgGEsIPYjPgPlvnDhxdxBhFb) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___NlNdOWcnqrIwPCzjFdrYCyNUacTsc) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___eiJJUxxHNHyrpyDGIBUhrltXmYcK) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___IJSkWyjbAQBRKeQFvHUFfTqZgVTiA) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___LQATtHWcwXWdYXQEeFnWSPAFIGCbA) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___noCCzJfDAFGZEosWChTvclXciZYfB) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___FAkRGMOSmgEgasBRqXpdQdgDxDHM) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___FBkFyLFzWhhXXDIiHYOKpeHjKpGm) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___EhdelWqHbOHmohPNCqFpFiRZRbxxA) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Rewired::Controller, ___cHcIdCyPbUFUPmqmVADKYldtCcZc) == 0x128, "Offset mismatch!");

static_assert(sizeof(::Rewired::Controller) == 0x130, "Size mismatch!");

} // namespace end def Rewired
