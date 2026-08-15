#pragma once
// IWYU pragma private; include "Rewired/Utils/EmptyObjects_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__EmptyObjects_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
template<typename T>
inline void Rewired::Utils::EmptyObjects_1<T>::setStaticF_KBHNurFTcjoSqFOHmkzihKxFaQMe(::ArrayW<T>  value)  {
::cordl_internals::setStaticField<::ArrayW<T>, "KBHNurFTcjoSqFOHmkzihKxFaQMe", ::Rewired::Utils::EmptyObjects_1<T>*>(std::forward<::ArrayW<T>>(value));
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::EmptyObjects_1<T>::getStaticF_KBHNurFTcjoSqFOHmkzihKxFaQMe()  {
return ::cordl_internals::getStaticField<::ArrayW<T>, "KBHNurFTcjoSqFOHmkzihKxFaQMe", ::Rewired::Utils::EmptyObjects_1<T>*>();
}
template<typename T>
inline void Rewired::Utils::EmptyObjects_1<T>::setStaticF_JWiCtfXFbDaVonKlTvgVbsSwFyTD(::System::Collections::Generic::IList_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<T>*, "JWiCtfXFbDaVonKlTvgVbsSwFyTD", ::Rewired::Utils::EmptyObjects_1<T>*>(std::forward<::System::Collections::Generic::IList_1<T>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::IList_1<T>* Rewired::Utils::EmptyObjects_1<T>::getStaticF_JWiCtfXFbDaVonKlTvgVbsSwFyTD()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<T>*, "JWiCtfXFbDaVonKlTvgVbsSwFyTD", ::Rewired::Utils::EmptyObjects_1<T>*>();
}
template<typename T>
inline ::ArrayW<T> Rewired::Utils::EmptyObjects_1<T>::get_array()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::EmptyObjects_1<T>*>(),
                        {"get_array", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IList_1<T>* Rewired::Utils::EmptyObjects_1<T>::get_EmptyReadOnlyIListT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::EmptyObjects_1<T>*>(),
                        {"get_EmptyReadOnlyIListT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<T>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::Rewired::Utils::EmptyObjects_1<T>::EmptyObjects_1()   {
}
