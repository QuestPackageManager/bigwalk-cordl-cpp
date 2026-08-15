#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ListOfStringsToEnumConverter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ListOfStringsToEnumConverter_1)
namespace Newtonsoft::Json::Linq {
class JArray;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
template<typename TEnum>
class ListOfStringsToEnumConverter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1, "PlayEveryWare.EpicOnlineServices", "ListOfStringsToEnumConverter`1");
// Dependencies Newtonsoft.Json.JsonConverter
namespace PlayEveryWare::EpicOnlineServices {
// cpp template
template<typename TEnum>
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ListOfStringsToEnumConverter`1<TEnum>
class CORDL_TYPE ListOfStringsToEnumConverter_1 : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief Field _targetType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetType, put=__cordl_internal_set__targetType)) ::System::Type*  _targetType;

/// @brief Method CanConvert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool CanConvert(::System::Type*  objectType) ;

/// @brief Method FromNumberValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEnum FromNumberValue(::Newtonsoft::Json::Linq::JToken*  token) ;

/// @brief Method FromStringArray, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TEnum FromStringArray(::Newtonsoft::Json::Linq::JArray*  array) ;

/// @brief Method FromStringArrayWithCustomMapping, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEnum FromStringArrayWithCustomMapping(::Newtonsoft::Json::Linq::JArray*  array, ::System::Collections::Generic::IDictionary_2<::StringW,TEnum>*  customMappings) ;

static inline ::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>* New_ctor() ;

/// @brief Method ReadJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method WriteJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

constexpr ::System::Type* const& __cordl_internal_get__targetType() const;

constexpr ::System::Type*& __cordl_internal_get__targetType() ;

constexpr void __cordl_internal_set__targetType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListOfStringsToEnumConverter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListOfStringsToEnumConverter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListOfStringsToEnumConverter_1(ListOfStringsToEnumConverter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListOfStringsToEnumConverter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListOfStringsToEnumConverter_1(ListOfStringsToEnumConverter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18842};

/// @brief Field _targetType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ____targetType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayEveryWare::EpicOnlineServices
