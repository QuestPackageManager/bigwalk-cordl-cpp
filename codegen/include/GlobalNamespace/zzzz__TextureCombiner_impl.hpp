#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureCombiner.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__TextureCombiner_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextureCombiner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureCombiner::*)()>(&::GlobalNamespace::TextureCombiner::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803f2080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureCombiner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::TextureCombiner::__cordl_internal_get_texture00()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture00;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::TextureCombiner::__cordl_internal_get_texture00() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture00;
}
constexpr void GlobalNamespace::TextureCombiner::__cordl_internal_set_texture00(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture00 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::TextureCombiner::__cordl_internal_get_texture01()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture01;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::TextureCombiner::__cordl_internal_get_texture01() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture01;
}
constexpr void GlobalNamespace::TextureCombiner::__cordl_internal_set_texture01(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture01 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::TextureCombiner::__cordl_internal_get_texture10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture10;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::TextureCombiner::__cordl_internal_get_texture10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture10;
}
constexpr void GlobalNamespace::TextureCombiner::__cordl_internal_set_texture10(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture10 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::TextureCombiner::__cordl_internal_get_texture11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture11;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::TextureCombiner::__cordl_internal_get_texture11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture11;
}
constexpr void GlobalNamespace::TextureCombiner::__cordl_internal_set_texture11(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture11 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::TextureCombiner::__cordl_internal_get_destinationTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::TextureCombiner::__cordl_internal_get_destinationTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationTexture;
}
constexpr void GlobalNamespace::TextureCombiner::__cordl_internal_set_destinationTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationTexture = value;
}
constexpr int32_t& GlobalNamespace::TextureCombiner::__cordl_internal_get_maxSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSize;
}
constexpr int32_t const& GlobalNamespace::TextureCombiner::__cordl_internal_get_maxSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSize;
}
constexpr void GlobalNamespace::TextureCombiner::__cordl_internal_set_maxSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSize = value;
}
inline void GlobalNamespace::TextureCombiner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureCombiner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextureCombiner* GlobalNamespace::TextureCombiner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextureCombiner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureCombiner::TextureCombiner()   {
}
