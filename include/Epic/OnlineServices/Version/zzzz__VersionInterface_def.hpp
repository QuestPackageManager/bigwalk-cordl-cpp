#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Version/VersionInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VersionInterface)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Version {
class VersionInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Version::VersionInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Version::VersionInterface*, "Epic.OnlineServices.Version", "VersionInterface");
// Dependencies System.Object
namespace Epic::OnlineServices::Version {
// Is value type: false
// CS Name: Epic.OnlineServices.Version.VersionInterface
class CORDL_TYPE VersionInterface : public ::System::Object {
public:
// Declarations
/// @brief Field COMPANY_NAME, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_COMPANY_NAME, put=setStaticF_COMPANY_NAME)) ::Epic::OnlineServices::Utf8String*  COMPANY_NAME;

/// @brief Field COPYRIGHT_STRING, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_COPYRIGHT_STRING, put=setStaticF_COPYRIGHT_STRING)) ::Epic::OnlineServices::Utf8String*  COPYRIGHT_STRING;

/// @brief Field PRODUCT_IDENTIFIER, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PRODUCT_IDENTIFIER, put=setStaticF_PRODUCT_IDENTIFIER)) ::Epic::OnlineServices::Utf8String*  PRODUCT_IDENTIFIER;

/// @brief Field PRODUCT_NAME, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PRODUCT_NAME, put=setStaticF_PRODUCT_NAME)) ::Epic::OnlineServices::Utf8String*  PRODUCT_NAME;

/// @brief Method GetVersion, addr 0x1804e6420, size 0x80, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Utf8String* GetVersion() ;

static inline ::Epic::OnlineServices::Version::VersionInterface* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_COMPANY_NAME() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_COPYRIGHT_STRING() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_PRODUCT_IDENTIFIER() ;

static inline ::Epic::OnlineServices::Utf8String* getStaticF_PRODUCT_NAME() ;

static inline void setStaticF_COMPANY_NAME(::Epic::OnlineServices::Utf8String*  value) ;

static inline void setStaticF_COPYRIGHT_STRING(::Epic::OnlineServices::Utf8String*  value) ;

static inline void setStaticF_PRODUCT_IDENTIFIER(::Epic::OnlineServices::Utf8String*  value) ;

static inline void setStaticF_PRODUCT_NAME(::Epic::OnlineServices::Utf8String*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VersionInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VersionInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionInterface(VersionInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionInterface(VersionInterface const& ) = delete;

/// @brief Field HOTFIX offset 0xffffffff size 0x4
static constexpr int32_t  HOTFIX{static_cast<int32_t>(0x3)};

/// @brief Field MAJOR offset 0xffffffff size 0x4
static constexpr int32_t  MAJOR{static_cast<int32_t>(0x1)};

/// @brief Field MINOR offset 0xffffffff size 0x4
static constexpr int32_t  MINOR{static_cast<int32_t>(0x13)};

/// @brief Field PATCH offset 0xffffffff size 0x4
static constexpr int32_t  PATCH{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7456};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Version::VersionInterface) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Version
