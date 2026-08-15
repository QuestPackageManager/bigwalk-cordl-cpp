#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AttachMaterialEditor.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__AttachMaterialEditor_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::AttachMaterialEditor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AttachMaterialEditor::*)(int32_t)>(&::WaveHarmonic::Crest::AttachMaterialEditor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AttachMaterialEditor*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::AttachMaterialEditor::_ctor(int32_t  order)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AttachMaterialEditor*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, order);
}
inline ::WaveHarmonic::Crest::AttachMaterialEditor* WaveHarmonic::Crest::AttachMaterialEditor::New_ctor(int32_t  order)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::AttachMaterialEditor*>(order));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::AttachMaterialEditor::AttachMaterialEditor()   {
}
