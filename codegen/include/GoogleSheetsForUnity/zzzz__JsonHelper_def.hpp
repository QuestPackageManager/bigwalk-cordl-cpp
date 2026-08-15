#pragma once
// IWYU pragma private; include "GoogleSheetsForUnity/JsonHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JsonHelper)
namespace GoogleSheetsForUnity {
template<typename T>
class JsonHelper_Wrapper_1;
}
// Forward declare root types
namespace GoogleSheetsForUnity {
class JsonHelper;
}
namespace GoogleSheetsForUnity {
template<typename T>
class JsonHelper_Wrapper_1;
}
// Write type traits
MARK_REF_T(::GoogleSheetsForUnity::JsonHelper*);
MARK_GEN_REF_T_PTR(::GoogleSheetsForUnity::JsonHelper_Wrapper_1);
DEFINE_IL2CPP_CLASS(::GoogleSheetsForUnity::JsonHelper*, "GoogleSheetsForUnity", "JsonHelper");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GoogleSheetsForUnity::JsonHelper_Wrapper_1, "GoogleSheetsForUnity", "JsonHelper/Wrapper`1");
// Dependencies System.Object
namespace GoogleSheetsForUnity {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GoogleSheetsForUnity.JsonHelper/Wrapper`1<T>
class CORDL_TYPE JsonHelper_Wrapper_1 : public ::System::Object {
public:
// Declarations
/// @brief Field array, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_array, put=__cordl_internal_set_array)) ::ArrayW<T>  array;

static inline ::GoogleSheetsForUnity::JsonHelper_Wrapper_1<T>* New_ctor() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_array() const;

constexpr ::ArrayW<T>& __cordl_internal_get_array() ;

constexpr void __cordl_internal_set_array(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonHelper_Wrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonHelper_Wrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonHelper_Wrapper_1(JsonHelper_Wrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonHelper_Wrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonHelper_Wrapper_1(JsonHelper_Wrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5809};

/// @brief Field array, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___array;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GoogleSheetsForUnity
// Dependencies System.Object
namespace GoogleSheetsForUnity {
// Is value type: false
// CS Name: GoogleSheetsForUnity.JsonHelper
class CORDL_TYPE JsonHelper : public ::System::Object {
public:
// Declarations
template<typename T>
using Wrapper_1 = ::GoogleSheetsForUnity::JsonHelper_Wrapper_1<T>;

/// @brief Method ArrayFromJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> ArrayFromJson(::StringW  json) ;

static inline ::GoogleSheetsForUnity::JsonHelper* New_ctor() ;

/// @brief Method ToJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW ToJson(::ArrayW<T>  array, bool  prettyPrint) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonHelper(JsonHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonHelper(JsonHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5810};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GoogleSheetsForUnity::JsonHelper) == 0x10, "Size mismatch!");

} // namespace end def GoogleSheetsForUnity
