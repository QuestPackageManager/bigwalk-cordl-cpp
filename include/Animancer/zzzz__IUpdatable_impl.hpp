#pragma once
// IWYU pragma private; include "Animancer/IUpdatable.hpp"
#include "Animancer/zzzz__IUpdatable_def.hpp"
#include "Animancer/zzzz__Key_def.hpp"
//  Writing Method size for method: ::Animancer::IUpdatable.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::IUpdatable::*)()>(&::Animancer::IUpdatable::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::IUpdatable*>(),
                    {::i2c::class_of<::Animancer::IUpdatable*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Animancer::IUpdatable::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::IUpdatable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr  Animancer::IUpdatable::operator ::Animancer::Key_IListItem*() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* Animancer::IUpdatable::i___Animancer__Key_IListItem() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
