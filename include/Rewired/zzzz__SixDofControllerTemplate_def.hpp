#pragma once
// IWYU pragma private; include "Rewired/SixDofControllerTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerTemplate_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SixDofControllerTemplate)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplateButton;
}
namespace Rewired {
class IControllerTemplateHat;
}
namespace Rewired {
class IControllerTemplateStick6D;
}
namespace Rewired {
class IControllerTemplateThrottle;
}
namespace Rewired {
class IControllerTemplate;
}
namespace Rewired {
class ISixDofControllerTemplate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
class SixDofControllerTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::SixDofControllerTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::SixDofControllerTemplate*, "Rewired", "SixDofControllerTemplate");
// Dependencies Rewired.ControllerTemplate, System.Guid
namespace Rewired {
// Is value type: false
// CS Name: Rewired.SixDofControllerTemplate
class CORDL_TYPE SixDofControllerTemplate : public ::Rewired::ControllerTemplate {
public:
// Declarations
 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button1)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button1;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button10)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button10;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button11)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button11;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button12)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button12;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button13)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button13;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button14)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button14;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button15)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button15;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button16)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button16;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button17)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button17;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button18)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button18;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button19)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button19;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button2)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button2;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button20)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button20;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button21)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button21;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button22)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button22;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button23)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button23;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button24)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button24;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button25)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button25;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button26)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button26;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button27)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button27;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button28)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button28;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button29)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button29;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button3)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button3;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button30)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button30;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button31)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button31;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button32)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button32;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button4)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button4;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button5)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button5;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button6)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button6;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button7)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button7;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button8)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button8;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_button9)) ::Rewired::IControllerTemplateButton*  Rewired_ISixDofControllerTemplate_button9;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_extraAxis1)) ::Rewired::IControllerTemplateAxis*  Rewired_ISixDofControllerTemplate_extraAxis1;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_extraAxis2)) ::Rewired::IControllerTemplateAxis*  Rewired_ISixDofControllerTemplate_extraAxis2;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_extraAxis3)) ::Rewired::IControllerTemplateAxis*  Rewired_ISixDofControllerTemplate_extraAxis3;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_extraAxis4)) ::Rewired::IControllerTemplateAxis*  Rewired_ISixDofControllerTemplate_extraAxis4;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_hat1)) ::Rewired::IControllerTemplateHat*  Rewired_ISixDofControllerTemplate_hat1;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_hat2)) ::Rewired::IControllerTemplateHat*  Rewired_ISixDofControllerTemplate_hat2;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_stick)) ::Rewired::IControllerTemplateStick6D*  Rewired_ISixDofControllerTemplate_stick;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_throttle1)) ::Rewired::IControllerTemplateThrottle*  Rewired_ISixDofControllerTemplate_throttle1;

 __declspec(property(get=Rewired_ISixDofControllerTemplate_get_throttle2)) ::Rewired::IControllerTemplateThrottle*  Rewired_ISixDofControllerTemplate_throttle2;

/// @brief Field typeGuid, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_typeGuid, put=setStaticF_typeGuid)) ::System::Guid  typeGuid;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Convert operator to "::Rewired::ISixDofControllerTemplate"
constexpr operator  ::Rewired::ISixDofControllerTemplate*() noexcept;

static inline ::Rewired::SixDofControllerTemplate* New_ctor(::System::Object*  payload) ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button1, addr 0x180393de0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button1() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button10, addr 0x180393b40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button10() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button11, addr 0x180393b60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button11() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button12, addr 0x180393b80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button12() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button13, addr 0x180393ba0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button13() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button14, addr 0x180393bc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button14() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button15, addr 0x180393be0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button15() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button16, addr 0x180394300, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button16() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button17, addr 0x180396710, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button17() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button18, addr 0x180396730, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button18() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button19, addr 0x180396750, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button19() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button2, addr 0x180393f40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button2() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button20, addr 0x180396770, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button20() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button21, addr 0x180394060, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button21() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button22, addr 0x1803940e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button22() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button23, addr 0x1803940a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button23() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button24, addr 0x1803940c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button24() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button25, addr 0x180393e20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button25() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button26, addr 0x180394020, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button26() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button27, addr 0x180393ee0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button27() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button28, addr 0x180393f00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button28() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button29, addr 0x180393f20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button29() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button3, addr 0x180393f60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button3() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button30, addr 0x180394580, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button30() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button31, addr 0x1803945a0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button31() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button32, addr 0x1803945c0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button32() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button4, addr 0x180393f80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button4() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button5, addr 0x180393fa0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button5() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button6, addr 0x180393fc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button6() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button7, addr 0x180393fe0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button7() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button8, addr 0x180393b00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button8() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_button9, addr 0x180393b20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateButton* Rewired_ISixDofControllerTemplate_get_button9() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_extraAxis1, addr 0x18039cca0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_ISixDofControllerTemplate_get_extraAxis1() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_extraAxis2, addr 0x18039ccc0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_ISixDofControllerTemplate_get_extraAxis2() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_extraAxis3, addr 0x18039cce0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_ISixDofControllerTemplate_get_extraAxis3() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_extraAxis4, addr 0x1803941e0, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_ISixDofControllerTemplate_get_extraAxis4() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_hat1, addr 0x18039cd00, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_ISixDofControllerTemplate_get_hat1() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_hat2, addr 0x18039cd20, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateHat* Rewired_ISixDofControllerTemplate_get_hat2() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_stick, addr 0x18039cd40, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateStick6D* Rewired_ISixDofControllerTemplate_get_stick() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_throttle1, addr 0x18039cd60, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThrottle* Rewired_ISixDofControllerTemplate_get_throttle1() ;

/// @brief Method Rewired.ISixDofControllerTemplate.get_throttle2, addr 0x18039cd80, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateThrottle* Rewired_ISixDofControllerTemplate_get_throttle2() ;

/// @brief Method .ctor, addr 0x180393af0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  payload) ;

static inline ::System::Guid getStaticF_typeGuid() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

/// @brief Convert to "::Rewired::ISixDofControllerTemplate"
constexpr ::Rewired::ISixDofControllerTemplate* i___Rewired__ISixDofControllerTemplate() noexcept;

static inline void setStaticF_typeGuid(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SixDofControllerTemplate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SixDofControllerTemplate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SixDofControllerTemplate(SixDofControllerTemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SixDofControllerTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SixDofControllerTemplate(SixDofControllerTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5653};

/// @brief Field elementId_button1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button1{static_cast<int32_t>(0xc)};

/// @brief Field elementId_button10 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button10{static_cast<int32_t>(0x15)};

/// @brief Field elementId_button11 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button11{static_cast<int32_t>(0x16)};

/// @brief Field elementId_button12 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button12{static_cast<int32_t>(0x17)};

/// @brief Field elementId_button13 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button13{static_cast<int32_t>(0x18)};

/// @brief Field elementId_button14 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button14{static_cast<int32_t>(0x19)};

/// @brief Field elementId_button15 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button15{static_cast<int32_t>(0x1a)};

/// @brief Field elementId_button16 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button16{static_cast<int32_t>(0x1b)};

/// @brief Field elementId_button17 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button17{static_cast<int32_t>(0x1c)};

/// @brief Field elementId_button18 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button18{static_cast<int32_t>(0x1d)};

/// @brief Field elementId_button19 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button19{static_cast<int32_t>(0x1e)};

/// @brief Field elementId_button2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button2{static_cast<int32_t>(0xd)};

/// @brief Field elementId_button20 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button20{static_cast<int32_t>(0x1f)};

/// @brief Field elementId_button21 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button21{static_cast<int32_t>(0x37)};

/// @brief Field elementId_button22 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button22{static_cast<int32_t>(0x38)};

/// @brief Field elementId_button23 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button23{static_cast<int32_t>(0x39)};

/// @brief Field elementId_button24 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button24{static_cast<int32_t>(0x3a)};

/// @brief Field elementId_button25 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button25{static_cast<int32_t>(0x3b)};

/// @brief Field elementId_button26 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button26{static_cast<int32_t>(0x3c)};

/// @brief Field elementId_button27 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button27{static_cast<int32_t>(0x3d)};

/// @brief Field elementId_button28 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button28{static_cast<int32_t>(0x3e)};

/// @brief Field elementId_button29 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button29{static_cast<int32_t>(0x3f)};

/// @brief Field elementId_button3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button3{static_cast<int32_t>(0xe)};

/// @brief Field elementId_button30 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button30{static_cast<int32_t>(0x40)};

/// @brief Field elementId_button31 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button31{static_cast<int32_t>(0x41)};

/// @brief Field elementId_button32 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button32{static_cast<int32_t>(0x42)};

/// @brief Field elementId_button4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button4{static_cast<int32_t>(0xf)};

/// @brief Field elementId_button5 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button5{static_cast<int32_t>(0x10)};

/// @brief Field elementId_button6 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button6{static_cast<int32_t>(0x11)};

/// @brief Field elementId_button7 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button7{static_cast<int32_t>(0x12)};

/// @brief Field elementId_button8 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button8{static_cast<int32_t>(0x13)};

/// @brief Field elementId_button9 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_button9{static_cast<int32_t>(0x14)};

/// @brief Field elementId_extraAxis1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_extraAxis1{static_cast<int32_t>(0x8)};

/// @brief Field elementId_extraAxis2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_extraAxis2{static_cast<int32_t>(0x9)};

/// @brief Field elementId_extraAxis3 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_extraAxis3{static_cast<int32_t>(0xa)};

/// @brief Field elementId_extraAxis4 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_extraAxis4{static_cast<int32_t>(0xb)};

/// @brief Field elementId_hat1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat1{static_cast<int32_t>(0x30)};

/// @brief Field elementId_hat1Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat1Down{static_cast<int32_t>(0x24)};

/// @brief Field elementId_hat1DownLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat1DownLeft{static_cast<int32_t>(0x25)};

/// @brief Field elementId_hat1DownRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat1DownRight{static_cast<int32_t>(0x23)};

/// @brief Field elementId_hat1Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat1Left{static_cast<int32_t>(0x26)};

/// @brief Field elementId_hat1Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat1Right{static_cast<int32_t>(0x22)};

/// @brief Field elementId_hat1Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat1Up{static_cast<int32_t>(0x20)};

/// @brief Field elementId_hat1UpLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat1UpLeft{static_cast<int32_t>(0x27)};

/// @brief Field elementId_hat1UpRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat1UpRight{static_cast<int32_t>(0x21)};

/// @brief Field elementId_hat2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat2{static_cast<int32_t>(0x31)};

/// @brief Field elementId_hat2Down offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat2Down{static_cast<int32_t>(0x2c)};

/// @brief Field elementId_hat2DownLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat2DownLeft{static_cast<int32_t>(0x2d)};

/// @brief Field elementId_hat2DownRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat2DownRight{static_cast<int32_t>(0x2b)};

/// @brief Field elementId_hat2Left offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat2Left{static_cast<int32_t>(0x2e)};

/// @brief Field elementId_hat2Right offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat2Right{static_cast<int32_t>(0x2a)};

/// @brief Field elementId_hat2Up offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat2Up{static_cast<int32_t>(0x28)};

/// @brief Field elementId_hat2UpLeft offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat2UpLeft{static_cast<int32_t>(0x2f)};

/// @brief Field elementId_hat2UpRight offset 0xffffffff size 0x4
static constexpr int32_t  elementId_hat2UpRight{static_cast<int32_t>(0x29)};

/// @brief Field elementId_positionX offset 0xffffffff size 0x4
static constexpr int32_t  elementId_positionX{static_cast<int32_t>(0x1)};

/// @brief Field elementId_positionY offset 0xffffffff size 0x4
static constexpr int32_t  elementId_positionY{static_cast<int32_t>(0x2)};

/// @brief Field elementId_positionZ offset 0xffffffff size 0x4
static constexpr int32_t  elementId_positionZ{static_cast<int32_t>(0x0)};

/// @brief Field elementId_rotationX offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rotationX{static_cast<int32_t>(0x3)};

/// @brief Field elementId_rotationY offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rotationY{static_cast<int32_t>(0x5)};

/// @brief Field elementId_rotationZ offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rotationZ{static_cast<int32_t>(0x4)};

/// @brief Field elementId_stick offset 0xffffffff size 0x4
static constexpr int32_t  elementId_stick{static_cast<int32_t>(0x36)};

/// @brief Field elementId_throttle1 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle1{static_cast<int32_t>(0x34)};

/// @brief Field elementId_throttle1Axis offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle1Axis{static_cast<int32_t>(0x6)};

/// @brief Field elementId_throttle1MinDetent offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle1MinDetent{static_cast<int32_t>(0x32)};

/// @brief Field elementId_throttle2 offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle2{static_cast<int32_t>(0x35)};

/// @brief Field elementId_throttle2Axis offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle2Axis{static_cast<int32_t>(0x7)};

/// @brief Field elementId_throttle2MinDetent offset 0xffffffff size 0x4
static constexpr int32_t  elementId_throttle2MinDetent{static_cast<int32_t>(0x33)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::SixDofControllerTemplate) == 0x78, "Size mismatch!");

} // namespace end def Rewired
