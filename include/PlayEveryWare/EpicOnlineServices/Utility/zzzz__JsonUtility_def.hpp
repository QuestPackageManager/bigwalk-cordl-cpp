#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/JsonUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JsonUtility)
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices::Utility {
class JsonUtility;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility*, "PlayEveryWare.EpicOnlineServices.Utility", "JsonUtility");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices::Utility {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.Utility.JsonUtility
class CORDL_TYPE JsonUtility : public ::System::Object {
public:
// Declarations
/// @brief Field s_serializerSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_serializerSettings, put=setStaticF_s_serializerSettings)) ::Newtonsoft::Json::JsonSerializerSettings*  s_serializerSettings;

/// @brief Method FromJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FromJson(::StringW  json) ;

/// @brief Method FromJsonFile, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FromJsonFile(::StringW  filepath) ;

/// @brief Method FromJsonOverwrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void FromJsonOverwrite(::StringW  json, T  obj) ;

/// @brief Method ToJson, addr 0x180540ed0, size 0x60, virtual false, abstract: false, final false
static inline ::StringW ToJson(::System::Object*  obj, bool  pretty) ;

/// @brief Method TryFromJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryFromJson(::StringW  json, ::by_ref<T>  obj) ;

static inline ::Newtonsoft::Json::JsonSerializerSettings* getStaticF_s_serializerSettings() ;

static inline void setStaticF_s_serializerSettings(::Newtonsoft::Json::JsonSerializerSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonUtility(JsonUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonUtility(JsonUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18950};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices::Utility
