#pragma once
// IWYU pragma private; include "Rewired/FlightPedalsTemplate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerTemplate_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FlightPedalsTemplate)
namespace Rewired {
class IControllerTemplateAxis;
}
namespace Rewired {
class IControllerTemplate;
}
namespace Rewired {
class IFlightPedalsTemplate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired {
class FlightPedalsTemplate;
}
// Write type traits
MARK_REF_T(::Rewired::FlightPedalsTemplate*);
DEFINE_IL2CPP_CLASS(::Rewired::FlightPedalsTemplate*, "Rewired", "FlightPedalsTemplate");
// Dependencies Rewired.ControllerTemplate, System.Guid
namespace Rewired {
// Is value type: false
// CS Name: Rewired.FlightPedalsTemplate
class CORDL_TYPE FlightPedalsTemplate : public ::Rewired::ControllerTemplate {
public:
// Declarations
 __declspec(property(get=Rewired_IFlightPedalsTemplate_get_leftPedal)) ::Rewired::IControllerTemplateAxis*  Rewired_IFlightPedalsTemplate_leftPedal;

 __declspec(property(get=Rewired_IFlightPedalsTemplate_get_rightPedal)) ::Rewired::IControllerTemplateAxis*  Rewired_IFlightPedalsTemplate_rightPedal;

 __declspec(property(get=Rewired_IFlightPedalsTemplate_get_slide)) ::Rewired::IControllerTemplateAxis*  Rewired_IFlightPedalsTemplate_slide;

/// @brief Field typeGuid, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_typeGuid, put=setStaticF_typeGuid)) ::System::Guid  typeGuid;

/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr operator  ::Rewired::IControllerTemplate*() noexcept;

/// @brief Convert operator to "::Rewired::IFlightPedalsTemplate"
constexpr operator  ::Rewired::IFlightPedalsTemplate*() noexcept;

static inline ::Rewired::FlightPedalsTemplate* New_ctor(::System::Object*  payload) ;

/// @brief Method Rewired.IFlightPedalsTemplate.get_leftPedal, addr 0x180393a60, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IFlightPedalsTemplate_get_leftPedal() ;

/// @brief Method Rewired.IFlightPedalsTemplate.get_rightPedal, addr 0x180393a70, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IFlightPedalsTemplate_get_rightPedal() ;

/// @brief Method Rewired.IFlightPedalsTemplate.get_slide, addr 0x180393a90, size 0x20, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplateAxis* Rewired_IFlightPedalsTemplate_get_slide() ;

/// @brief Method .ctor, addr 0x180393af0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  payload) ;

static inline ::System::Guid getStaticF_typeGuid() ;

/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* i___Rewired__IControllerTemplate() noexcept;

/// @brief Convert to "::Rewired::IFlightPedalsTemplate"
constexpr ::Rewired::IFlightPedalsTemplate* i___Rewired__IFlightPedalsTemplate() noexcept;

static inline void setStaticF_typeGuid(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlightPedalsTemplate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlightPedalsTemplate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlightPedalsTemplate(FlightPedalsTemplate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlightPedalsTemplate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlightPedalsTemplate(FlightPedalsTemplate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5652};

/// @brief Field elementId_leftPedal offset 0xffffffff size 0x4
static constexpr int32_t  elementId_leftPedal{static_cast<int32_t>(0x0)};

/// @brief Field elementId_rightPedal offset 0xffffffff size 0x4
static constexpr int32_t  elementId_rightPedal{static_cast<int32_t>(0x1)};

/// @brief Field elementId_slide offset 0xffffffff size 0x4
static constexpr int32_t  elementId_slide{static_cast<int32_t>(0x2)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::FlightPedalsTemplate) == 0x78, "Size mismatch!");

} // namespace end def Rewired
