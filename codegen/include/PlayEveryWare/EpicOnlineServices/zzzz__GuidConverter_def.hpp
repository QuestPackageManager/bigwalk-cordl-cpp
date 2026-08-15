#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/GuidConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(GuidConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class GuidConverter;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::GuidConverter*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::GuidConverter*, "PlayEveryWare.EpicOnlineServices", "GuidConverter");
// Dependencies Newtonsoft.Json.JsonConverter
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.GuidConverter
class CORDL_TYPE GuidConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief Method CanConvert, addr 0x180540730, size 0x60, virtual true, abstract: false, final false
inline bool CanConvert(::System::Type*  objectType) ;

static inline ::PlayEveryWare::EpicOnlineServices::GuidConverter* New_ctor() ;

/// @brief Method ReadJson, addr 0x180540790, size 0x190, virtual true, abstract: false, final false
inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method WriteJson, addr 0x180540920, size 0xc0, virtual true, abstract: false, final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuidConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuidConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidConverter(GuidConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidConverter(GuidConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18837};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::GuidConverter) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
