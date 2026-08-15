#pragma once
// IWYU pragma private; include "AmplifyImpostors/AmplifyImpostorBakePreset.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "AmplifyImpostors/zzzz__AmplifyImpostorBakePreset_def.hpp"
#include "AmplifyImpostors/zzzz__TextureOutput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostorBakePreset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostorBakePreset::*)()>(&::AmplifyImpostors::AmplifyImpostorBakePreset::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802d5920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostorBakePreset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_get_BakeShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BakeShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_get_BakeShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BakeShader;
}
constexpr void AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_set_BakeShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BakeShader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_get_RuntimeShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RuntimeShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_get_RuntimeShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RuntimeShader;
}
constexpr void AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_set_RuntimeShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RuntimeShader = value;
}
constexpr int32_t& AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_get_AlphaIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AlphaIndex;
}
constexpr int32_t const& AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_get_AlphaIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AlphaIndex;
}
constexpr void AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_set_AlphaIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AlphaIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*& AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_get_Output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Output;
}
constexpr ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>* const& AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_get_Output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Output;
}
constexpr void AmplifyImpostors::AmplifyImpostorBakePreset::__cordl_internal_set_Output(::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Output = value;
}
inline void AmplifyImpostors::AmplifyImpostorBakePreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostorBakePreset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::AmplifyImpostors::AmplifyImpostorBakePreset* AmplifyImpostors::AmplifyImpostorBakePreset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AmplifyImpostors::AmplifyImpostorBakePreset*>());
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::AmplifyImpostorBakePreset::AmplifyImpostorBakePreset()   {
}
