#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemotePlayerResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RemotePlayerResponse)
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::RemotePlayerResponse*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::RemotePlayerResponse*, "Shipmates.RemotePlayerDebug", "RemotePlayerResponse");
// Dependencies System.Object
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.RemotePlayerResponse
class CORDL_TYPE RemotePlayerResponse : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field payload, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_payload, put=__cordl_internal_set_payload)) ::StringW  payload;

static inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::StringW const& __cordl_internal_get_payload() const;

constexpr ::StringW& __cordl_internal_get_payload() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_payload(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemotePlayerResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemotePlayerResponse(RemotePlayerResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemotePlayerResponse(RemotePlayerResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5751};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field payload, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___payload;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::RemotePlayerDebug::RemotePlayerResponse, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmates::RemotePlayerDebug::RemotePlayerResponse, ___payload) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Shipmates::RemotePlayerDebug::RemotePlayerResponse) == 0x20, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
