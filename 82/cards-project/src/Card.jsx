import profilepicture from './assets/1.jpg';

function Card(){
    return (
        <div className="card">
            <img className="card-image" src={profilepicture} alt="profile-picture" />
            <h2 className="card-title">Akshat</h2>
            <p className="card-text">I am a Student and enjoy playing video games.</p>
        </div>
    );
}

export default Card;