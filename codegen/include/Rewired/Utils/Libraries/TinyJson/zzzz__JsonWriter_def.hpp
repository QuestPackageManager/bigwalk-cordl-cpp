#pragma once
// IWYU pragma private; include "Rewired/Utils/Libraries/TinyJson/JsonWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JsonWriter)
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Libraries::TinyJson {
class JsonWriter;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Libraries::TinyJson::JsonWriter*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Libraries::TinyJson::JsonWriter*, "Rewired.Utils.Libraries.TinyJson", "JsonWriter");
// Dependencies System.Object
namespace Rewired::Utils::Libraries::TinyJson {
// Is value type: false
// CS Name: Rewired.Utils.Libraries.TinyJson.JsonWriter
class CORDL_TYPE JsonWriter : public ::System::Object {
public:
// Declarations
/// @brief Field jkTVdkJvZLPiSsbkYDdGgjktfVFx, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_jkTVdkJvZLPiSsbkYDdGgjktfVFx, put=setStaticF_jkTVdkJvZLPiSsbkYDdGgjktfVFx)) ::System::Action_2<::System::Text::StringBuilder*,::System::Object*>*  jkTVdkJvZLPiSsbkYDdGgjktfVFx;

/// @brief Method EwCWxbhwitYJzdXlyXDgFoKIwajE, addr 0x18192eb50, size 0x14f0, virtual false, abstract: false, final false
static inline void EwCWxbhwitYJzdXlyXDgFoKIwajE(::System::Text::StringBuilder*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method SfTetNgqwzDvCgywGCEQRPpKFraic, addr 0x181930040, size 0xd0, virtual false, abstract: false, final false
static inline void SfTetNgqwzDvCgywGCEQRPpKFraic(::System::Text::StringBuilder*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method ToJson, addr 0x181930110, size 0x60, virtual false, abstract: false, final false
static inline ::StringW ToJson(::System::Object*  item) ;

/// @brief Method XRakwckggXXYOZmlBUdGIDlAoeen, addr 0x181930170, size 0x80, virtual false, abstract: false, final false
static inline ::System::Action_2<::System::Text::StringBuilder*,::System::Object*>* XRakwckggXXYOZmlBUdGIDlAoeen() ;

static inline ::System::Action_2<::System::Text::StringBuilder*,::System::Object*>* getStaticF_jkTVdkJvZLPiSsbkYDdGgjktfVFx() ;

static inline void setStaticF_jkTVdkJvZLPiSsbkYDdGgjktfVFx(::System::Action_2<::System::Text::StringBuilder*,::System::Object*>*  value) ;

/// @brief Method xsDdiJFRImHcJdFCXMAbLcZoLnpaA, addr 0x1819301f0, size 0x80, virtual false, abstract: false, final false
static inline void xsDdiJFRImHcJdFCXMAbLcZoLnpaA(::System::Text::StringBuilder*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonWriter(JsonWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonWriter(JsonWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2961};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Libraries::TinyJson::JsonWriter) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Libraries::TinyJson
