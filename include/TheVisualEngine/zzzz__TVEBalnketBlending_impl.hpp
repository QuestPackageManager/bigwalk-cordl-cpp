#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEBalnketBlending.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEBalnketBlending_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEBalnketBlending._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEBalnketBlending::*)()>(&::TheVisualEngine::TVEBalnketBlending::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEBalnketBlending*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& TheVisualEngine::TVEBalnketBlending::__cordl_internal_get_blendMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendMode;
}
constexpr int32_t const& TheVisualEngine::TVEBalnketBlending::__cordl_internal_get_blendMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendMode;
}
constexpr void TheVisualEngine::TVEBalnketBlending::__cordl_internal_set_blendMode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendMode = value;
}
inline void TheVisualEngine::TVEBalnketBlending::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEBalnketBlending*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEBalnketBlending* TheVisualEngine::TVEBalnketBlending::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEBalnketBlending*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEBalnketBlending::TVEBalnketBlending()   {
}
