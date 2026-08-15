#pragma once
// IWYU pragma private; include "Rewired/Internal/ControllerTemplateFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ControllerTemplateFactory)
namespace Rewired {
class IControllerTemplate;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::Internal {
class ControllerTemplateFactory;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::ControllerTemplateFactory*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::ControllerTemplateFactory*, "Rewired.Internal", "ControllerTemplateFactory");
// Dependencies System.Object, System.Type
namespace Rewired::Internal {
// Is value type: false
// CS Name: Rewired.Internal.ControllerTemplateFactory
class CORDL_TYPE ControllerTemplateFactory : public ::System::Object {
public:
// Declarations
/// @brief Field _defaultTemplateInterfaceTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__defaultTemplateInterfaceTypes, put=setStaticF__defaultTemplateInterfaceTypes)) ::ArrayW<::System::Type*>  _defaultTemplateInterfaceTypes;

/// @brief Field _defaultTemplateTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__defaultTemplateTypes, put=setStaticF__defaultTemplateTypes)) ::ArrayW<::System::Type*>  _defaultTemplateTypes;

/// @brief Method Create, addr 0x1803a96e0, size 0x310, virtual false, abstract: false, final false
static inline ::Rewired::IControllerTemplate* Create(::System::Guid  typeGuid, ::System::Object*  payload) ;

static inline ::ArrayW<::System::Type*> getStaticF__defaultTemplateInterfaceTypes() ;

static inline ::ArrayW<::System::Type*> getStaticF__defaultTemplateTypes() ;

/// @brief Method get_templateInterfaceTypes, addr 0x180393460, size 0x20, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Type*> get_templateInterfaceTypes() ;

/// @brief Method get_templateTypes, addr 0x180393480, size 0x20, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Type*> get_templateTypes() ;

static inline void setStaticF__defaultTemplateInterfaceTypes(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF__defaultTemplateTypes(::ArrayW<::System::Type*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateFactory(ControllerTemplateFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateFactory(ControllerTemplateFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5695};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Internal::ControllerTemplateFactory) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Internal
