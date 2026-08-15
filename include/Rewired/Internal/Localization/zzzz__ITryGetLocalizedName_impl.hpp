#pragma once
// IWYU pragma private; include "Rewired/Internal/Localization/ITryGetLocalizedName.hpp"
#include "Rewired/Internal/Localization/zzzz__ITryGetLocalizedName_def.hpp"
//  Writing Method size for method: ::Rewired::Internal::Localization::ITryGetLocalizedName.TryGetLocalizedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Internal::Localization::ITryGetLocalizedName::*)(::by_ref<::StringW>)>(&::Rewired::Internal::Localization::ITryGetLocalizedName::TryGetLocalizedName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Internal::Localization::ITryGetLocalizedName*>(),
                    {::i2c::class_of<::Rewired::Internal::Localization::ITryGetLocalizedName*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Internal::Localization::ITryGetLocalizedName::TryGetLocalizedName(::by_ref<::StringW>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Internal::Localization::ITryGetLocalizedName*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
