#pragma once
// IWYU pragma private; include "Shipmates/Utils/OpenObserveContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OpenObserveContext)
// Forward declare root types
namespace Shipmates::Utils {
class OpenObserveContext;
}
// Write type traits
MARK_REF_T(::Shipmates::Utils::OpenObserveContext*);
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::OpenObserveContext*, "Shipmates.Utils", "OpenObserveContext");
// Dependencies System.Object
namespace Shipmates::Utils {
// Is value type: false
// CS Name: Shipmates.Utils.OpenObserveContext
class CORDL_TYPE OpenObserveContext : public ::System::Object {
public:
// Declarations
/// @brief Field gameVersion, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameVersion, put=__cordl_internal_set_gameVersion)) ::StringW  gameVersion;

/// @brief Field platform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::StringW  platform;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

/// @brief Field userName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_userName, put=__cordl_internal_set_userName)) ::StringW  userName;

static inline ::Shipmates::Utils::OpenObserveContext* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_gameVersion() const;

constexpr ::StringW& __cordl_internal_get_gameVersion() ;

constexpr ::StringW const& __cordl_internal_get_platform() const;

constexpr ::StringW& __cordl_internal_get_platform() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr ::StringW const& __cordl_internal_get_userName() const;

constexpr ::StringW& __cordl_internal_get_userName() ;

constexpr void __cordl_internal_set_gameVersion(::StringW  value) ;

constexpr void __cordl_internal_set_platform(::StringW  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

constexpr void __cordl_internal_set_userName(::StringW  value) ;

/// @brief Method .ctor, addr 0x181acbe10, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenObserveContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenObserveContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenObserveContext(OpenObserveContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenObserveContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenObserveContext(OpenObserveContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21065};

/// @brief Field userName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___userName;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field gameVersion, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___gameVersion;

/// @brief Field platform, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___platform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Utils::OpenObserveContext, ___userName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveContext, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveContext, ___gameVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Shipmates::Utils::OpenObserveContext, ___platform) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Utils::OpenObserveContext) == 0x30, "Size mismatch!");

} // namespace end def Shipmates::Utils
