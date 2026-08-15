#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEPrefab.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_impl.hpp"
#include "TheVisualEngine/zzzz__TVEPrefab_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEPrefab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEPrefab::*)()>(&::TheVisualEngine::TVEPrefab::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEPrefab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void TheVisualEngine::TVEPrefab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEPrefab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEPrefab* TheVisualEngine::TVEPrefab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEPrefab*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEPrefab::TVEPrefab()   {
}
