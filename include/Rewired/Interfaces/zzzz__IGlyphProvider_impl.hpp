#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IGlyphProvider.hpp"
#include "Rewired/Interfaces/zzzz__IGlyphProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IGlyphProvider.TryGetGlyph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Interfaces::IGlyphProvider::*)(::StringW, ::by_ref<::System::Object*>)>(&::Rewired::Interfaces::IGlyphProvider::TryGetGlyph)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IGlyphProvider*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IGlyphProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Interfaces::IGlyphProvider::TryGetGlyph(::StringW  key, ::by_ref<::System::Object*>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IGlyphProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, result);
}
