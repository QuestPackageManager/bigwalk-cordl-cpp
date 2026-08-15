#pragma once
// IWYU pragma private; include "GoogleSheetsForUnity/ConnectionData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConnectionData)
// Forward declare root types
namespace GoogleSheetsForUnity {
class ConnectionData;
}
// Write type traits
MARK_REF_T(::GoogleSheetsForUnity::ConnectionData*);
DEFINE_IL2CPP_CLASS(::GoogleSheetsForUnity::ConnectionData*, "GoogleSheetsForUnity", "ConnectionData");
// Dependencies UnityEngine.ScriptableObject
namespace GoogleSheetsForUnity {
// Is value type: false
// CS Name: GoogleSheetsForUnity.ConnectionData
class CORDL_TYPE ConnectionData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field servicePassword, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_servicePassword, put=__cordl_internal_set_servicePassword)) ::StringW  servicePassword;

/// @brief Field spreadsheetId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spreadsheetId, put=__cordl_internal_set_spreadsheetId)) ::StringW  spreadsheetId;

/// @brief Field timeOutLimit, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeOutLimit, put=__cordl_internal_set_timeOutLimit)) float_t  timeOutLimit;

/// @brief Field usePOST, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_usePOST, put=__cordl_internal_set_usePOST)) bool  usePOST;

/// @brief Field webServiceUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_webServiceUrl, put=__cordl_internal_set_webServiceUrl)) ::StringW  webServiceUrl;

static inline ::GoogleSheetsForUnity::ConnectionData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_servicePassword() const;

constexpr ::StringW& __cordl_internal_get_servicePassword() ;

constexpr ::StringW const& __cordl_internal_get_spreadsheetId() const;

constexpr ::StringW& __cordl_internal_get_spreadsheetId() ;

constexpr float_t const& __cordl_internal_get_timeOutLimit() const;

constexpr float_t& __cordl_internal_get_timeOutLimit() ;

constexpr bool const& __cordl_internal_get_usePOST() const;

constexpr bool& __cordl_internal_get_usePOST() ;

constexpr ::StringW const& __cordl_internal_get_webServiceUrl() const;

constexpr ::StringW& __cordl_internal_get_webServiceUrl() ;

constexpr void __cordl_internal_set_servicePassword(::StringW  value) ;

constexpr void __cordl_internal_set_spreadsheetId(::StringW  value) ;

constexpr void __cordl_internal_set_timeOutLimit(float_t  value) ;

constexpr void __cordl_internal_set_usePOST(bool  value) ;

constexpr void __cordl_internal_set_webServiceUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0x1803bdc00, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectionData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectionData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectionData(ConnectionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectionData(ConnectionData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5805};

/// @brief Field webServiceUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___webServiceUrl;

/// @brief Field spreadsheetId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___spreadsheetId;

/// @brief Field servicePassword, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___servicePassword;

/// @brief Field timeOutLimit, offset: 0x30, size: 0x4, def value: None
 float_t  ___timeOutLimit;

/// @brief Field usePOST, offset: 0x34, size: 0x1, def value: None
 bool  ___usePOST;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GoogleSheetsForUnity::ConnectionData, ___webServiceUrl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::ConnectionData, ___spreadsheetId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::ConnectionData, ___servicePassword) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::ConnectionData, ___timeOutLimit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::ConnectionData, ___usePOST) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GoogleSheetsForUnity::ConnectionData) == 0x38, "Size mismatch!");

} // namespace end def GoogleSheetsForUnity
