#pragma once
// IWYU pragma private; include "ApexSystems/Utility/PluginVersionInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PluginVersionInterface)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace ApexSystems::Utility {
class PluginVersionInterface;
}
// Write type traits
MARK_REF_T(::ApexSystems::Utility::PluginVersionInterface*);
DEFINE_IL2CPP_CLASS(::ApexSystems::Utility::PluginVersionInterface*, "ApexSystems.Utility", "PluginVersionInterface");
// Dependencies System.Object
namespace ApexSystems::Utility {
// Is value type: false
// CS Name: ApexSystems.Utility.PluginVersionInterface
class CORDL_TYPE PluginVersionInterface : public ::System::Object {
public:
// Declarations
/// @brief Field PRODUCT_IDENTIFIER, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PRODUCT_IDENTIFIER, put=setStaticF_PRODUCT_IDENTIFIER)) ::Epic::OnlineServices::Utf8String*  PRODUCT_IDENTIFIER;

/// @brief Field PRODUCT_NAME, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PRODUCT_NAME, put=setStaticF_PRODUCT_NAME)) ::Epic::OnlineServices::Utf8String*  PRODUCT_NAME;

/// @brief Method GetVersion, addr 0x180544e80, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* GetVersion() ;

static inline ::ApexSystems::Utility::PluginVersionInterface* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_PRODUCT_IDENTIFIER() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_PRODUCT_NAME() ;

static inline void setStaticF_PRODUCT_IDENTIFIER(::Epic::OnlineServices::Utf8String*  value) ;

static inline void setStaticF_PRODUCT_NAME(::Epic::OnlineServices::Utf8String*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PluginVersionInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PluginVersionInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PluginVersionInterface(PluginVersionInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PluginVersionInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PluginVersionInterface(PluginVersionInterface const& ) = delete;

/// @brief Field HOTFIX offset 0xffffffff size 0x4
static constexpr int32_t  HOTFIX{static_cast<int32_t>(0x2)};

/// @brief Field MAJOR offset 0xffffffff size 0x4
static constexpr int32_t  MAJOR{static_cast<int32_t>(0x1)};

/// @brief Field MINOR offset 0xffffffff size 0x4
static constexpr int32_t  MINOR{static_cast<int32_t>(0x12)};

/// @brief Field PATCH offset 0xffffffff size 0x4
static constexpr int32_t  PATCH{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18793};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ApexSystems::Utility::PluginVersionInterface) == 0x10, "Size mismatch!");

} // namespace end def ApexSystems::Utility
